#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int cou = 0;
    cin>>str;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == tolower(str[i]))
            cou++;
    }

    if(cou==0)
    {
        for(int i=0; i<str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout<<str<<"\n";
    }
    else if(cou==1 && str[0]==tolower(str[0]))
    {
        str[0] = toupper(str[0]);
        for(int i=1; i<str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }
        cout<<str<<"\n";
    }
    else
        cout<<str<<"\n";


    return 0;
}
