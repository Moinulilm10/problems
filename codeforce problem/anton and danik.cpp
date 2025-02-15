#include<iostream>
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int n,l1=0,l2=0;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0 ; i<n; i++)
    {
        if(str[i]=='A')
            l1++;

        else if(str[i]=='D')
            l2++;
    }


    if(l1>l2)
        cout<<"Anton"<<endl;

    else if(l1<l2)
        cout<<"Danik"<<endl;

    else if(l1==l2)
        cout<<"Friendship"<<endl;

}

