#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%n==0 && n%4==0 || n%7==0)
    {
        cout<<"YES"<<endl;
    }
    if(n%n == 0 && n%4!=0 || n%7!=0)
    {
        cout<<"YES"<<endl;
    }


}
