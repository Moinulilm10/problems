#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int maxx, minn, def;
    if(a>=b && a>=c)
    {
        maxx=a;
        if(b>=c)
        {
            def=b;
            minn=c;
        }
        else
        {
            def=c;
            minn=b;
        }
    }
    else if(b>=a && b>=c)
    {
        maxx=b;
        if(a>=c)
        {
            def=a;
            minn=c;
        }
        else
        {
            def=c;
            minn=a;
        }
    }
    else
    {
        maxx=c;
        if(a>=b)
        {
            def=a;
            minn=b;
        }
        else
        {
            def=b;
            minn=a;
        }
    }
    cout<<minn<<"\n"<<def<<"\n"<<maxx<<"\n"<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;
    return 0;
}
