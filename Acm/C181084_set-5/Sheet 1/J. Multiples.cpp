#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int maxx = max(a,b);
    int minn = min(a,b);

    if(maxx % minn == 0)
    {
        cout<<"Multiples"<<endl;
    }
    else
    {
        cout<<"No Multiples"<<endl;
    }

    return 0;
}
