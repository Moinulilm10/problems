#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    int n;
    cin>>n;

    ll arr[n];
    int flag = 0;



    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    for(int i=0; i<n-2; i++)
    {
        if(arr[i]+arr[i+1] > arr[i+2])
        {
            cout<<"YES"<<endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
