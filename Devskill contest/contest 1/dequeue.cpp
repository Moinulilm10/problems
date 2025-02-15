#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

deque<int>dq;

int main()
{
    ios;

    int n;
    cin>>n;

    int op,d,x;

    for(int i=0; i<n; i++)
    {
        cin>>op;
        if(op==0)
        {
            cin>>d;
            if(d==0)
            {
                cin>>x;
                dq.push_front(x);
            }
            else if(d==1)
            {
                cin>>x;
                dq.push_back(x);
            }
        }
        else if(op == 1)
        {
            cin>>d;
            cout<<dq[d]<<endl;
        }
        else if(op == 2)
        {
            cin>>d;
            if(d==0)
            {
                dq.pop_front();
            }
            else if(d==1)
            {
                dq.pop_back();
            }
        }
    }



    return 0;
}

