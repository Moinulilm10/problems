#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100007
#define endl "\n"
#define ll long long

ll sum(ll number)
{
    ll digit, ans=0;
    while(number!=0)
    {
        digit = number % 10;
        ans = ans + digit;
        number = number / 10;
    }
    return ans;
}

int main()
{
    ll number;
    while(scanf("%lld",&number))
    {
        if(number==0)
            break;
        ll res = sum(sum(sum(number)));

        printf("%d\n", res);
    }


    return 0;
}

