#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,Count=0;

    cin>>n>>x;

    for(int i=1; i<=n; i++)
    {
        if(x%i==0 && x/i<=n)
            Count++;
    }
    cout<<Count<<endl;
    return 0;
}
