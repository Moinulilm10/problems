#include<bits/stdc++.h>
using namespace std;
#define mod 100000007

int dp[51][1010];
int n, k, v[51], c[51];

int f(int pos, int rem)
{
    if(rem==0)
        return pos <= n;

    if(rem < 0 || pos >= n)
        return 0;

    if(dp[pos][rem] != -1)
    {
        return dp[pos][rem];
    }
    int res = 0;
    for(int i=0; i<=c[pos]; i++)
    {
        int next = f(pos+1, rem - (i * v[pos])) % mod;
        res = (res + next) % mod;
    }
    return dp[pos][rem] = res;
}

int main()
{
    int t, cas = 1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &k);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&v[i]);
        }
        for(int i=0; i<n; i++)
        {
            scanf("%d",&c[i]);
        }
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                dp[i][j] = -1;
            }
        }
        printf("Case %d: %d\n", cas++,f(0,k));
    }
    return 0;
}
