#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

set<int>st;

int main()
{
    ios;

    int n;
    cin>>n;

    int a, b;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a==0)
        {
            cin>>b;
            st.insert(b);
            cout<<st.size()<<endl;
        }
        else if(a==1)
        {
            cin>>b;
            cout<<st.count(b)<<endl;
        }
        else if(a==2)
        {
            cin>>b;
            st.erase(b);
        }
    }
    return 0;
}

