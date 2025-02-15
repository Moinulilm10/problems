#include<bits/stdc++.h>
using namespace std;

int findSum(long long arr[], int n)
{
    if (n <= 0)
        return 0;
    return (findSum(arr, n - 1) + arr[n - 1]);
}

int main()
{
    long long n,i;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<findSum(arr,n)<<endl;
}
