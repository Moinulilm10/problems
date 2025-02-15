#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,a,d;
        cin>>n>>m>>a>>d;

        int Count = 0;
        for(int i=n; i<=m; i++)
        {
            if(i%a==1|| i%(a+d)==1 || i%(a+2*d)==1 || i%(a+3*d)==1 || i%(a+4*d)==1)
            {
                Count++;
            }
        }
        cout<<Count<<endl;
    }

}
