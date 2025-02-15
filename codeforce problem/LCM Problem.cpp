#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long l,r;
        scanf("%lld %lld",&l,&r);
        long long gcd =__gcd(l,r);

        cout<<gcd<<endl;
    }
}
