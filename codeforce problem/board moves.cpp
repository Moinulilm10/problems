#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    ll t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int cnt = 1;
        ll ans = 0;
        for(ll i=3; i<=n; i+=2)
        {
            ans+= (4*i - 4)*cnt;
            cnt++;
        }
       cout<<ans<<"\n";
    }
}
