#include<stdio.h>
#include<math.h>
int main()
{
    int t, lsd, msd,i,digit,sum;
    long long int n;
    scanf("%d",&t);
    for( i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        lsd = n%10;
        digit=(int)log10(n);
        msd = (int) (n/pow(10,digit));
        sum= msd + lsd;
        printf("Sum = %d\n",sum);


    }
    return 0;
}
