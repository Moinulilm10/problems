#include<bits/stdc++.h>
using namespace std;

bool allCharactersSame(string &str)
{
    int n = str.length();
    for (int i = 1; i < n; i++)
        if (str[i] != str[0])
            return false;

    return true;
}

int main()
{
    string str;
    cin>>str;

    if(allCharactersSame(str)) cout<<"Won"<<endl;
    else cout<<"Lost"<<endl;


    return 0;
}
