#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,ans=0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        for(int i=1; i<n; i++)
        {
            if(arr[i]-arr[i-1]>1)
            {
                ans = 1;
                break;
            }
        }
        if(ans==1)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

    }
    return 0;
}
