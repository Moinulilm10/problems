#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;


       cout<<max(a,b)/min(a,b)<<endl;
    }
    return 0;
}
