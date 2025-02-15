#include<stdio.h>
#include<string.h>

int main()
{
    int t, i;
    char str[1001];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
       gets(str);
       strrev(str);
       printf("%s",str);
    }
    return 0;
}

