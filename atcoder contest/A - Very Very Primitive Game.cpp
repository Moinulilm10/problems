#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,c;
    cin>>t>>a>>c;
    if(c==0)
    {
        if(t>a)
        {
            cout<<"Takahashi"<<endl;
        }
        else
        {
            cout<<"Aoki"<<endl;
        }
    }
    else
    {
        if(t<a)
        {
            cout<<"Aoki"<<endl;
        }
        else
        {
            cout<<"Takahashi"<<endl;
        }
    }

    return 0;
}
