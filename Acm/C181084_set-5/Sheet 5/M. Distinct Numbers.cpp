#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countDis(ll arr[], int n)
{
    sort(arr,arr+n);

    ll res = 0;

    for(ll i=0; i<n; i++)
    {
        while(i < n-1 && arr[i] == arr[i+1])
        {
            i++;
        }
        res++;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<< countDis(arr,n) <<endl;

    return 0;
}
