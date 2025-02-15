#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    priority_queue<int>k;

    while(1)
    {
        string str;
        cin>>str;

        if(str=="insert")
        {
            int num;
            cin>>num;
            k.push(num);
        }
        else if(str=="extract")
        {
            cout<<k.top()<<endl;
            k.pop();
        }
        else
        {
            break;
        }
    }
    return 0;
}

