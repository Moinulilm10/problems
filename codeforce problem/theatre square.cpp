#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m,n,a,r1,r2;
    cin>>m>>n>>a;
    if(m%a==0)
    {
       r1 = (m/a);
    }
    else if(m%a!=0)
    {
        r1 = (m/a) + 1;
    }
    if(n%a==0)
    {
       r2 = (n/a);
    }
    else if(n%a!=0)
    {
        r2 = (n/a)+ 1;
    }
    cout<<r1*r2<<endl;
}
