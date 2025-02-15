#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    vector<int>v;

    int n,a,sum=0, result = -1;
    long num = 10000000;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
        sum+=a;
    }
    for(int i=0; i<v.size(); i++)
    {
        long temp = sum - v[i];
        if(v[i]%7==0 && num>v[i])
        {
           num = v[i];
           result = i;
        }
    }
    cout<<result<<endl;
    return 0;
}

