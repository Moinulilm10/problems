#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,l,r,s,m,n;

    scanf("%d",&t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d", &l, &r, &s);
        if(l>r)
        {
            printf("-1 -1\n");
        }
        else
        {
            if(l%s==0)
                m=l/s;
            else
                m=(l/s)+1;
            n = r/s;
        }
        if(n==0 || m==0 || m>n)
            printf("-1 -1\n");
        else
            printf("%lld %lld\n",m,n);

    }
    return 0;
}
