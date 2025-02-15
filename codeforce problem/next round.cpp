#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int a[100];
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
