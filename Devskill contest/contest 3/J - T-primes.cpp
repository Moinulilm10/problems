#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

bool isPrime[MAX];

void sieve()
{
    isPrime[1]=1;
    isPrime[0]=1;

    for(int i=2; i*i<=MAX; i++)
    {
        if(isPrime[i]==0)
        {
            for(int j=i*i; j<=MAX; j+=i)
            {
                isPrime[j]=1;
            }
        }
    }
}



int main()
{
    int t;
    scanf("%d", &t);
    sieve();
    while(t--)
    {
        long long n, r;
        scanf("%lld",&n);

        r = sqrt(n);

        if(isPrime[r]==0 && r*r==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }

    return 0;
}

