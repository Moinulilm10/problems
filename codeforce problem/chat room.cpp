#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello", s;
    cin>>s;
    int j=0, pos=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==str[j])
        {
            j++;
            pos++;
            if(pos == 5)
            {
                break;
            }
        }
    }
    if(pos == 5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

