#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007
#define test int t;scanf("%d",&t);while(t--)solve()

int f(int x)
{
    return (x*x + 2*x + 3);
}


int main()
{
    ios;
    ll t;
    cin>>t;

    ll ans = f(f(f(t)+t)+f(f(t)));

    cout<<ans<<endl;


    return 0;
}
