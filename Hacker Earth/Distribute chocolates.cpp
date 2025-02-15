#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    scanf("%lld", &t);
    while(t--)
    {
        long long c,n;
        scanf("%lld %lld",&c, &n);

        long long dis = (n)*(n+1)/2;

        if(dis > c)
        {
            printf("%lld\n", c);
        }
        else
        {
            c = c - dis;
            c = c % n;
            printf("%lld\n", c);
        }
    }
    return 0;
}
