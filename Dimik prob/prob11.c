#include<stdio.h>

int main()
{
    int t,n,i;
    long long  int fact;
    long long int j;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        fact=1;

        for(j=1; j<=n; j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
    }

}
