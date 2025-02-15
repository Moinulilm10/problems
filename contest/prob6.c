#include<stdio.h>

int main()
{
    int sum, dif, n1, n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
        dif = n1 - n2;
        printf("%d\n",dif);
    }
    else
    {
        sum = n1 + n2;
        printf("%d\n",sum);
    }
    return 0;
}
