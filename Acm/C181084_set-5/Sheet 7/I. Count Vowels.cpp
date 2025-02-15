#include<bits/stdc++.h>
using namespace std;

int vowels(string str, int pos, int length)
{
    if (str.length() == 0)
        return 0;

    switch (str[pos])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        return 1 + vowels(str.substr(1), pos, length);
    default:
        return vowels(str.substr(1), pos, length);
    }
}

int main()
{
    string str;

    int len;

    getline(cin, str);


    len = static_cast<int>(str.length());

    cout << vowels(str, 0, len) << endl;

    return 0;
}
