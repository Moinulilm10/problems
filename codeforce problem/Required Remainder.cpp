#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long  x, y, n,k,res;

        cin>>x>>y>>n;

        k = (n-y)/x;

        res = x*k + y;

        cout<<res<<endl;

    }
    return 0;
}
