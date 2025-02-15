#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    int n,i,flag=0;
    char a[21];
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {
        if(a[i]=='H' && a[i+1]=='H')
        {
            flag=1;
            cout<<"NO";
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            if(a[i]=='.')
                cout<<"B";
            else cout<<a[i];
        }
    }
    return 0;
}

