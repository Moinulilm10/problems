#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    string str2;

    cin>>str1;
    cin>>str2;

    for(int i=0; i<str1.size(); i++)
    {
        int a = str1[i];
        if(isupper(a)){
            str1[i] = tolower(a);
        }
    }

    for(int i=0; i<str2.size(); i++)
    {
        int b = str2[i];
        if(isupper(b)){
            str2[i] = tolower(b);
        }
    }

    if(str1 < str2)
    {
        cout<<-1<<"\n";
    }
    else if(str1>str2){
        cout<<1<<"\n";
    }
    else if(str1 == str2){
        cout<<0<<"\n";
    }

}
