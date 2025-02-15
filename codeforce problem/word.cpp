#include<bits/stdc++.h>
using namespace std;

int main(){

    int l=0, u=0;
    string str;
    cin>>str;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            l++;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            u++;
        }
    }
    if(u>l)
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = 97 + str[i] - 65;
            }
        }
    }
    else if(u<l)
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>=97 && str[i]<=122)
            {
                str[i] = 65 + str[i] - 97;
            }
        }
    }
    else if(u==l)
    {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                str[i] = 97 + str[i] - 65;
            }
        }
    }
    cout<<str<<"\n";

}
