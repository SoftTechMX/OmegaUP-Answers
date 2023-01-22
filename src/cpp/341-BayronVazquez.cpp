#include <iostream>
#include <cstdio>

using namespace std;

int songs, iniv, maxim;
int slist[55], dp[50005][55];

int main()
{
    scanf("%d", &songs);
    for(int i=1; i<=songs; i++)
    {
        scanf("%d", &slist[i]);
    }
    scanf("%d%d", &iniv, &maxim);
    dp[iniv][1]=1;
    for(int i=1; i<=songs; i++)
    {
        for(int j=0; j<=maxim; j++)
        {
            if(dp[j][i] && j-slist[i]>=0)
                dp[j-slist[i]][i+1]=1;
            if(dp[j][i] && j+slist[i]<=maxim)
                dp[j+slist[i]][i+1]=1;
        }
    }
    for(int j=maxim; j>=0; j--)
    {
        if(dp[j][songs+1])
        {
            printf("%d\n", j);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}