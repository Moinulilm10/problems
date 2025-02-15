#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<long long> a(n), b(n), c(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    long long ma = a[0];
    c[0] = a[0] * b[0];
    for(int i=1; i<n; i++)
    {
        ma = max(ma,a[i]);
        c[i] = max(c[i-1], ma*b[i]);
    }
    for(int i=0; i<n; i++)
    {
        cout<<c[i]<<endl;
    }

    return 0;
}
