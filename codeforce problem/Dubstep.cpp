#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string str;

    cin>>str;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=2;
            if(!flag)
            {
                cout<<" ";
            }
           // continue;
        }
        else
        {
            flag=0;
            cout<<str[i];
        }
    }

}
