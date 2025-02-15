#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int len = strlen(str);
    sort(str,str+len);
    int cou = 0;
    for(int i=0; i<len; i++)
    {

        if(str[i]!=str[i+1])
        {
            cou++;
        }
    }
    if(cou % 2 ==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
