#include<stdio.h>

int main()
{
    int t,n,m,j,i;
    scanf("%d",&t);
    for(i=1 ; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0 ; j<n; j++)
        {
            for(m=0 ; m<n; m++)
            {
                printf("*");
            }
            printf("\n");
        }
        if(i!=t){
          printf("\n");
        }
    }
    return 0;
}
