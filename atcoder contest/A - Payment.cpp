#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int mod = n%1000;

    if(mod == 0)
    {
        cout<<0<<endl;
    }
    else{
        cout<<1000-mod<<endl;
    }

    return 0;
}

