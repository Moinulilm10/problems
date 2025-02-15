#include <stdio.h>
#include<math.h>
main()
{
    int i,s,t,n;
    scanf("%d",&t);
    for(i=1; i<=t ; i++)
    {
        scanf("%d",&n);
        s=sqrt(n);
        if(n%s==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
}
