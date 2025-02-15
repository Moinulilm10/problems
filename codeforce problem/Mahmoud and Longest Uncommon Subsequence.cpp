
#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    string str, str2;

    cin >> str;
    cin >> str2;

    if(str == str2)
    {
        cout << -1 <<endl;
    }
    else if(str2.size() > str.size())
    {
        cout << str2.size() << endl;
    }
    else
    {
        cout<< str.size() << endl;
    }

    return 0;
}
