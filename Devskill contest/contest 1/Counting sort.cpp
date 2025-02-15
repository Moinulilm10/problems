#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int k;

void count_sort(int a[], int b[], int n)
{


    int c[k];
    for(int i=0; i<=k; i++)
    {
        c[i]=0;
    }
    for(int j=1; j<=n; j++)
    {
        c[a[j]] = c[a[j]] + 1;
    }
    for(int i=1; i<=k; i++)
    {
        c[i]+=c[i-1];
    }
    for(int j=n; j>=1; j--)
    {
        b[c[a[j]]] = a[j];
        c[a[j]] = c[a[j]]-1;
    }
}

int main()
{
     IOS;


    int n;
    cin>>n;

    int a[n], b[n];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>k)
        {
            k = a[i];
        }
    }
    count_sort(a,b,n);

    for(int i=1; i<=n; i++)
    {
        cout<<b[i];
        if(i<n)
        {
            cout<<" ";
        }
    }

    cout<<endl;
    return 0;
}


