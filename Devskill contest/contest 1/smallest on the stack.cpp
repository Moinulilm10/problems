#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    stack<int>s;

    int n,v;
    cin>>n;

    string str;

    while(n--)
    {
        cin>>str;
        if(str=='PUSH')
        {
            cin>>v;
            s.push(v);
        }
        else if(str=='MIN')
    }
}

