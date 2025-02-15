#include<stdio.h>

int main()
{
    int i,t,year;
    scanf("%d",&t);
    for(i=1 ; i<=t; i++)
    {
        scanf("%d",&year);
        if(year==2010)
            printf("HOSTED\n");
        else if(year==2015)
            printf("HOSTED\n");
        else if(year==2016)
            printf("HOSTED\n");
        else if(year==2017)
            printf("HOSTED\n");
        else if(year==2019)
            printf("HOSTED\n");
        else
            printf("NOT HOSTED\n");
    }
    return 0;
}
