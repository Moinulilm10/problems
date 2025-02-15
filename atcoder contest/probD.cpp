#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll z=2, n, cnt=0;

    cin>>n;

    while(n!=1){
        n/=z;
        z++;
        cnt++;
    }
    cout<<cnt<<"\n";
}
