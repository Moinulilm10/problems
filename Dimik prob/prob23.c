#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,j;

    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
        char str[100];
        scanf(" %[^\n]", str);
        for(i=0; str[i] != '\0'; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                printf("%d",str[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}
