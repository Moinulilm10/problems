#include<bits/stdc++.h>
using namespace std;

set<int>s;

int main()
{
    int q;
    cin>>q;
    set <long long int> s;
    for(int i=0; i<q; i++)
    {
        int y;
        long long int x;
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else
        {
            if(s.end()==s.find(x))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
