#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,n;
int main()
{
    cin>>n;
    while (a==b||a==c||a==d||b==c||b==d||c==d)
    {
        n++;
        a=n/1000;
        b=(n/100)%10;
        c=(n/10)%10;
        d=n%10;

    }
    cout<<n;
}
