#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag=0;
    for(int i=0 ; i<str.length(); i++)
    {
        if(str[i]>=36 && str[i]<=126)
        {
            if(str[i]=='H' || str[i]=='Q' || str[i]=='9')
            {
                flag = 1;
            }
        }
    }
    if(flag)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }

}
