#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;

    reverse(t.begin(), t.end());

    if(t==s)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }




}
