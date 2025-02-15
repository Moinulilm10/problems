#include<stdio.h>

int main()
{
    int arr[100], i, j, k, num, temp, t;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&arr[j]);
        for(j=0; j< num; j++)
        {
            for(k=0 ; k < num-j-1; j++)
            {
                if(arr[k] > arr[k+1])
                {
                    temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                }
            }
        }
        for(j=0; j<=num; j++)
        {
            printf("Case %d: %d\n",arr[num]);
        }

    }
    return 0;

}
