#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long x, y, cnt=0;

        cin>>x>>y;
        if(x<0 || y<0 || y>x)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<x<<endl;
        }

        cnt=0;

        t--;
    }

    return 0;
}
