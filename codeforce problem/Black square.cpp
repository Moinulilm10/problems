#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,cal=0;
    string str;
    cin>>a>>b>>c>>d;
    cin>>str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
           cal+=a;
        if(str[i]=='2')
           cal+=b;
        if(str[i]=='3')
           cal+=c;
        if(str[i]=='4')
           cal+=d;
    }
    cout<<cal<<endl;
}

