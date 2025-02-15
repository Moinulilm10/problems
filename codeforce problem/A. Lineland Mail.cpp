#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printf("%d %d\n", arr[1]-arr[0],arr[n-1]-arr[0]);
    for(int i=1; i<n-1; i++)
    {
        int mini = min((arr[i+1]-arr[i]),(arr[i]-arr[i-1]));
        int maxi = max((arr[i]-arr[0]),(arr[n-1]-arr[i]));
        printf("%d %d\n",mini, maxi);
    }
    printf("%d %d\n", arr[n-1]-arr[n-2],arr[n-1]-arr[0]);
    return 0;
}
