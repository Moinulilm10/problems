#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

map<string, int>m;

int main()
{
    ios;

    int q;

    cin>>q;

    int op, b;

    string str;

    for(int i=0; i<q; i++)
    {
        cin>>op;
        if(op == 0)
        {
            cin>>str>>b;
            m[str] = b;
        }
        else if(op == 1)
        {
            cin>>str;
            cout<<m[str]<<endl;
        }
        else if(op == 2)
        {
            cin>>str;
            m.erase(str);
        }
    }


    return 0;
}

