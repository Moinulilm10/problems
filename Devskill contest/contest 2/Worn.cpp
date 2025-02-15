#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long


int main()
{
    ios;

    int n,m, sum=0;
    cin>>n;
    int a[n],c[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        c[i]=sum;
    }

    cin>>m;
    int b[m];

    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    for(int j=0; j<m; j++)
    {
        cout<<lower_bound(c,c+n,b[j])-c+1<<endl;
    }
    return 0;
}

