#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    string s;

    cin >> str;
    cin >> s;

    for (int i = 0; i < str.size() && i < s.size(); i++)
    {


            if (str[i] == s[i])
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }

    }
}

