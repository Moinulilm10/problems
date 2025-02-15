#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int  n,m, result;
    while(t--)
    {
        cin>>n>>m;
        if(n==1)
        {
            cout<<"0"<<"\n";
        }
        else if(n==2)
        {
            cout<<m<<"\n";
        }
        else if(n>2)
        {
            result = min(2,n-1)*m;
            cout<<result<<"\n";
        }
    }


}
