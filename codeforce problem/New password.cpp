#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cout<<char((i%k)+97);
    }
    return 0;
}

