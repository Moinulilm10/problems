#include<bits/stdc++.h>
using namespace std;

long long a, b, sum=0;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        scanf("%lld %lld",&a, &b);
        sum += b*(b+1) / 2 - a*(a-1) / 2;
    }
   printf("%lld\n",sum);
   return 0;
}
