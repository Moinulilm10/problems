#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    char c;
    set<char> s;
    while(c!='}')
    {
        cin >> c;
        if(c>='a' && c<='z')
            s.insert(c);
    }
    cout<<s.size();

    return 0;
}

