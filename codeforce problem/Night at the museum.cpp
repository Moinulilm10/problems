#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int strt=0;
    int smove=0;
    int len = str.length();
    for(int i=0; i<len; i++)
    {
        int index = (str[i]-97);
        int w = abs(strt-index);
        if(w<13)
        {
            smove+=w;
        }
        else
        {
            smove+=26-w;
        }
        strt = index;
    }
    cout<<smove<<endl;
}
