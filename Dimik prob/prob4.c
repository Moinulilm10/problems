#include<stdio.h>

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        int a;
        scanf("%d",&a);
        printf("Case %d:",i);

        for(j=1; j<=a; j++)
        {
            if(a%j==0)
            {
                printf(" %d",j);
            }

        }
        printf("\n");
    }

    return 0;
}
