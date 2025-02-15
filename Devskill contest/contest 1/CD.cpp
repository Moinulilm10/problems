#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long



int main()
{
    ios;

    int m,n,cnt=0,cd;

    while(cin>>n>>m)
    {

        if(m==0 && n==0)
            break;

        set<int>mp;
        for(int i=0; i<n+m; i++)
        {
            cin>>cd;
            mp.insert(cd);
        }
        cout<<(m+n)-mp.size()<<endl;

    }

    return 0;
}

