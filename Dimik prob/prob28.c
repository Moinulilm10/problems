#include<stdio.h>

int main()
{
    int arr[100];
    int t,n,i;

    scanf("%d",&t);
    while(t--)
    {
        int flag=0,count=0;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]<=arr[i])
                flag++;
            else if(arr[i+1]>=arr[i])
                count++;
        }
        if(flag == n-1 || count == n-1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
