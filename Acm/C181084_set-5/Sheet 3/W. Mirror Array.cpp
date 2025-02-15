#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,count;
    cin>>n>>m;
    int ar[n][m],arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>ar[i][j];
        }
    }
    int a=-1,b=0;
    for(i=0; i<n; i++)
    {
        a++;
        b=0;
        for(j=(m-1); j>=0; j--)
        {
            arr[a][b]=ar[i][j];
            cout<<arr[a][b]<<' ';
            b++;
        }
        cout<<endl;
    }
}
