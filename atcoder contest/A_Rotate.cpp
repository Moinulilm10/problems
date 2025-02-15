#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int a, b, c;
    a = str[0] - '0';
    b = str[1] - '0';
    c = str[2] - '0';
    cout << (a + b + c) * 111 << endl;
    return 0;
}