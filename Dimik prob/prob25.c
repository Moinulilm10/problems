#include<stdio.h>
#include<stdlib.h>

int  gcd( int  a,int  b)
{
    if(b==0)
        return a;
    if(b>a)
        return gcd(b,a);
    return gcd(a%b,b);
}

int   main()
{

    int  t,num1,num2, lcm, result;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&num1,&num2);
        result = gcd(num1, num2);
        lcm = num1/result;
        printf("LCM = %d\n",lcm*num2);
    }
    return 0;
}
