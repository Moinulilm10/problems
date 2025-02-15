#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

vector<int>vec;

int main()
{
    ios;

    int n;
    cin>>n;

    int a, b, p;

    for(int i=0; i<n; i++)
    {
        cin>>a;

        if(a==0)
        {
            cin>>b;
            vec.push_back(b);
        }
        else if(a==1)
        {
            cin>>p;

            cout<<vec[p]<<endl;
        }
        else if(a==2)
        {
            vec.pop_back();
        }

    }

    return 0;
}

