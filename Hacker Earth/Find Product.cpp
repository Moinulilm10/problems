#include<bits/stdc++.h>
using namespace std;

int main()
{

    unsigned n,i,ans = 1;
    long long arr[n];
    for(i=0 ; i<n; i++)
    {
        cin>>arr[i];
    }


    for(i=0; i<n; i++)
    {
        ans = ans*arr[i] % (1000000007);
    }
    cout<<ans<<"\n";

}
