#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    map<string, int>m;
    map<string, int> :: iterator it, s, e;


    int n;
    cin>>n;

    int op,val;
    string key;

    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op == 0)
        {
            cin>>key>>val;
            m[key] = val;
        }
        else if(op == 1)
        {
            cin>>key;
            int ans = 0;
            if(m.find(key)!=m.end())
            {
                ans = m[key];
            }
            cout<<ans<<endl;
        }
        else if(op == 2)
        {
            cin>>key;
            if(m.find(key) != m.end())
            {
                m.erase(key);
            }
        }
        else
        {
            string l,r;
            cin>>l>>r;

            s = m.lower_bound(l);
            e = m.upper_bound(r);

            for(it= s; it!=e; it++)
            {
                cout<<it->first<<" "<<it->second<<endl;
            }
        }
    }
    return 0;
}

