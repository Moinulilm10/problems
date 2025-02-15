#include<bits/stdc++.h>
using namespace std;

int main()
{
    int max,n,i,j,t,k;
    cin>>t;
    for(k=0; k<t; k++)
    {
        cin>>n;
        int ar[n];
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        for(i=0; i<n; i++)
        {
            j=i;
            max=ar[i];
            cout<<max<<' ';
            for(j=i+1; j<n; j++)
            {
                if(max<ar[j])
                    max=ar[j];
                cout<<max<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
