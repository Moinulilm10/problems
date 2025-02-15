#include<iostream>
#include<string>
#include<cstdlib>
#include<ctype.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{

    string str, output = " ";
    cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]== 'a'|| str[i]== 'e' || str[i]== 'i'|| str[i]== 'o'|| str[i]== 'u'|| str[i]== 'y'|| str[i]== 'A'|| str[i]== 'E' || str[i]== 'I'|| str[i]== 'O'|| str[i]== 'U' || str[i]== 'Y')
        {
            continue;
        }
        if(str[i]>='A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        output = output + "." + str[i];


    }
    cout<<output<<endl;
    return 0;
}

