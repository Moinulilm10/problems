#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long int

int main()
{
    ios;


    ll n,x,d,dk=0;
    cin>>n>>x;
    while(n--)
    {
        char c;
        cin>>c>>d;
        if(c=='+')
        {
            x=x+d;
        }
        else if(c=='-')
        {
            if(x>=d)
            {
                x=x-d;
            }
            else
            {
                dk++;
            }
        }
    }
    cout<<x<<" "<<dk<<endl;
}

