#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,arr[11],m,sum;
    while(cin>>n>>m)
    {
        if(n<=0 || m<=0)
        {
            return 0;
        }
        sum=0;
        if(m>n)
        {
            for(int i=n; i<=m; i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
        }
        else
        {
            for(int i=m; i<=n; i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum<<endl;
        }
    }
    return 0;
}
