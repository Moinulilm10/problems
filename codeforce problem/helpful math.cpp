#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cin>>str;
    int len = strlen(str);
    for(int i=0; i<len; i+=2)
    {
        for(int j=0; j<len-i-2; j+=2)
        {
            if(str[j]>str[j+2])
            {
                swap(str[j],str[j+2]);
            }
        }
    }
    cout<<str<<endl;
}
