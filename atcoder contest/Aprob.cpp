#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t, sum=0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];


        for(int j=0; j<n; j++)
        {
            cin>>arr[i];
        }
        for(int m=0; m<=k; m++)
        {
            sum+=arr[m];

        }

    }
    if(sum%2!=0)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

}
