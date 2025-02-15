#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,min=1111111111,max=-1,l,r;
    cin>>n;
    long long int ar[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            l=i;
        }
        if(ar[i]>max)
        {
            max=ar[i];
            r=i;
        }
    }
    int temp;
    temp=ar[l];
    ar[l]=ar[r];
    ar[r]=temp;
    for(int i=1; i<=n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}
