#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

long long GCD(ll a, ll b)
{
    while(a!=0)
    {
        int new_a = b % a;
        int new_b = a;

        a = new_a;
        b = new_b;
    }
    return b;
}

int main()
{
    ios;

    int t;
    ll a,b,gcd;
    cin>>t;
    while(t--)
    {

        cin>>a>>b;

        int cnt = 0;
        gcd = GCD(a,b);

        for(int i=1; i*i<=gcd; i++)
        {
            if(i*i==gcd)
            {
                cnt++;
            }
            else if(gcd%i==0)
            {
                cnt+=2;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

