#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, ans=0;
    cin>>n>>m;
    float arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        arr[i] = ceil(arr[i]/m);
        if(arr[i]>=arr[ans]){
            ans = i;
        }
    }
    cout<<ans+1<<"\n";
}

