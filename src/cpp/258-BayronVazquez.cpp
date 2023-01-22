#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

struct coord
{
    int x, y;
}np;

int rows, cols, endx, endy, minim=56, x, y;
int vis[205][205];

char inp[205], wor[205][205];

queue<coord> viser;

void expand(int ladder)
{
    while(!viser.empty())
    {
        x=viser.front().x;
        y=viser.front().y;
        viser.pop();
        if(!vis[x-1][y] && wor[x-1][y]=='X')
        {
            vis[x-1][y]=vis[x][y]+1;
            np.x=x-1;
            np.y=y;
            viser.push(np);
        }
        if(!vis[x+1][y] && wor[x+1][y]=='X')
        {
            vis[x+1][y]=vis[x][y]+1;
            np.x=x+1;
            np.y=y;
            viser.push(np);
        }
        for(int i=1; i<=ladder; i++)
        {
            if(!vis[x][y+i] && wor[x][y+i]=='X')
            {
                vis[x][y+i]=vis[x][y]+1;
                np.x=x;
                np.y=y+i;
                viser.push(np);
            }
        }
        for(int i=1; i<=ladder && (y-i); i++)
        {
            if(!vis[x][y-i] && wor[x][y-i]=='X')
            {
                vis[x][y-i]=vis[x][y]+1;
                np.x=x;
                np.y=y-i;
                viser.push(np);
            }
        }
    }
}

void bin(int lef, int rig)
{
    if(lef<=rig)
    {
        int mid=(lef+rig)/2;
        for(int i=1; i<=rows; i++)
        {
            for(int j=1; j<=cols; j++)
            {
                vis[j][i]=0;
            }
        }
        np.x=1;
        np.y=rows;
        vis[1][rows]=1;
        viser.push(np);
        expand(mid);
        if(vis[endx][endy])
        {
            if(mid<minim)
            {
                minim=mid;
            }
            bin(lef, mid-1);
        }
        else
        {
            bin(mid+1, rig);
        }
    }
}

int main()
{
    scanf("%d%d", &rows, &cols);
    scanf("%d%d", &endy, &endx);
    for(int i=1; i<=rows; i++)
    {
        scanf("%s", inp);
        for(int j=1; j<=cols; j++)
        {
            wor[j][i]=inp[j-1];
        }
    }
    //51?
    bin(0, 55);
    if(minim==56)
    {
        minim=-1;
    }
    printf("%d\n", minim);
    return 0;
}