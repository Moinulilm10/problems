#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, result=1;

    while(cin>>n)
    {
        result = result*n;

    }
    if(result > 1000000000000000000)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<result<<"\n";
    }






}
