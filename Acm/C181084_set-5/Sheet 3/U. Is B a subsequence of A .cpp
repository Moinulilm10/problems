#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,m,i,result=0;
    cin>>n>>m;
    int a[n+2],b[n-2];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];
    for(i=0; i<n and result<m; i++)
    {
        if(a[i] !=b[result])
            continue;
        result++;
    }
    if(result==m)
        cout<<"YES";
    else
        cout<<"NO"<<endl;
    return 0;
}

