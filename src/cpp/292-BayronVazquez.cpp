#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
#define p(x) cout<<#x<<":"<<x<<"\n"

int n,m,p,i,j,k,q;
int X[]={0,0,0,1,2,2,2,1};
int Y[]={0,1,2,2,2,1,0,0};
string A[10],R[10][10][10];
char str[10];
int N[10],M[10],B[10][10][10];

void print(string P[10][10])
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%s\n",P[i][j].c_str());
        printf("\n");
    }
}
void rotX(string P[10][10])
{
    int i,k;

    for(i=0;i<3;i++)
        for(k=0;k<14;k++)
            swap(P[i][X[k%8]][Y[k%8]],P[i][X[(k+1)%8]][Y[(k+1)%8]]);
}
void rotY(string P[10][10])
{
    int i,k;

    for(i=0;i<3;i++)
        for(k=0;k<14;k++)
            swap(P[X[k%8]][i][Y[k%8]],P[X[(k+1)%8]][i][Y[(k+1)%8]]);
}
void rotZ(string P[10][10])
{
    int i,k;

    for(i=0;i<3;i++)
        for(k=0;k<14;k++)
            swap(P[X[k%8]][Y[k%8]][i],P[X[(k+1)%8]][Y[(k+1)%8]][i]);
}
void rot(string P[10][10],int i,int x,int y,int z)
{
    int q,r;

    for(q=0;q<3;q++)
        for(r=0;r<3;r++)
            P[q][r]=R[i][q][r];
    for(q=0;q<x;q++)
        rotX(P);
    for(q=0;q<y;q++)
        rotY(P);
    for(q=0;q<z;q++)
        rotZ(P);
}
bool f(int x,int y,int z)
{
    if(x<0 || y<0 || z<0 || x>=2 || y>=n || z>=m)
      return 0;
    return A[y][z]=='#' && B[x][y][z]==-1;
}
void rec(int i)
{
    int j,k,q,r,s,t,u,v,x,y,z;
    bool b;
    string P[10][10];
    
    if(i==p)
    {
        printf("Si\n");
        for(j=0;j<2;j++)
        {
            for(k=0;k<n;k++)
            {
                for(p=0;p<m;p++)
                    cerr<<B[j][k][p]+1;
                cerr<<"\n";
            }
            cerr<<"\n";
        }
        exit(0);
    }
    for(x=0;x<4;x++)
        for(y=0;y<4;y++)
            for(z=0;z<4;z++)
            {
                rot(P,i,x,y,z);
                for(j=0;j<n;j++)
                    for(k=0;k<m;k++)
                        for(q=-2;q<3;q++)
                            for(r=-2;r<3;r++)
                                for(s=-2;s<3;s++)
                                {
                                    for(t=0,b=1;t<3;t++)
                                        for(u=0;u<3;u++)
                                            for(v=0;v<3;v++)
                                                if(P[t][u][v]=='#')
                                                    if(!f(t-q,u-r+j,v-s+k))
                                                        b=0;
                                    if(b)
                                    {
                                        for(t=0;t<3;t++)
                                            for(u=0;u<3;u++)
                                                for(v=0;v<3;v++)
                                                    if(P[t][u][v]=='#')
                                                        B[t-q][u-r+j][v-s+k]=i;
                                        rec(i+1);
                                        for(t=0;t<3;t++)
                                            for(u=0;u<3;u++)
                                                for(v=0;v<3;v++)
                                                    if(P[t][u][v]=='#')
                                                        B[t-q][u-r+j][v-s+k]=-1;
                                    }
                                }
            }
}
int main()
{
    cin>>n>>m>>p;
  for(i=0;i<n;i++)
        cin>>A[i];
	for(i=0;i<p;i++)
    {
        cin>>N[i]>>M[i];
        for(j=0;j<3;j++)
            for(k=0;k<3;k++)
                R[i][j][k]="...";
        for(j=0;j<2;j++)
            for(k=0;k<N[i];k++)
            {
                cin>>str;
                for(q=0;q<M[i];q++)
                  R[i][j][k][q]=str[q];
            }
    }
    memset(B,-1,sizeof B);
    rec(0);
    printf("No\n");
	return 0;
}