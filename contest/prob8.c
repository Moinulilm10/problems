#include<stdio.h>
#include<math.h>

int main()
{
    int n,t,i,result;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        result=sqrt(n);
        printf("%d\n",result);
    }
    return 0;
}
