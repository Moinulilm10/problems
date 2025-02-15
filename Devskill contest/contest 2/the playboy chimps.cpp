#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

int arr[50005];

int main()
{
    ios;

    int n, q, val;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &q);
    while(q--)
    {
        scanf("%d",&val);
        int low = lower_bound(arr, arr+n, val) - arr;
        int high = upper_bound(arr, arr+n, val) - arr;

        if(low == 0)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", arr[low-1]);
        }

        if(high == n)
        {
            printf("X\n");
        }
        else
        {
            printf("%d\n",arr[high]);
        }
    }

    return 0;
}

