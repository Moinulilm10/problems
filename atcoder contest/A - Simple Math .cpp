#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353

int main()
{
    long long a, b, c;
    cin>>a>>b>>c;
    long long sum = a*(a+1)/2 * b*(b+1)/2 * c*(c+1)/2;
    cout<<sum % MOD<<endl;
}
