#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    list<int>li;
    list<int> :: iterator it;

    int n;
    cin>>n;

    int op,a,d;

    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op==0)
        {
            cin>>a;
            it=li.push_back(a);
        }
        else if(op == 1)
        {
            cin>>d;
            if(d>=0)
                it->li.end();

            else
                it->li.front()

        }
        else{
            it=li.it.erase(it);
        }
        for(int it=li.begin(); it!=end(); it++)
        {
            cout<<*it<<endl;
        }
    }
    return 0;
}

