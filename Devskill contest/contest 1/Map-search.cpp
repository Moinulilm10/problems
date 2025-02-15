#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

map<string,int>m;

int main()
{
    ios;

    int q;
    cin>>q;

    int b,op;
    string str;
    for(int i=0; i<q; i++)
    {
        cin>>op;
        if(op==0)
        {
            cin>>str>>b;

            m[str] = b;
        }
        else
        {
            cin>>str;
            cout<<m[str]<<endl;
        }
    }

    return 0;
}

