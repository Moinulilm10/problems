#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int t,i,j;

    scanf("%d",&t);
    getchar();
    for( i=1; i<=t; i++)
    {
        char first_line[1001];
        gets(first_line);

        char a;
        scanf("%c",&a);
        getchar();

        int coun=0;

        int len = strlen(first_line);

        for( j=0; j<len; j++)
        {
            if(first_line[i] == a)
            {
                coun++;
            }
        }
        if(coun!=0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n", a,first_line, coun);
        }
        else
        {
            printf("'%c' is not present\n",a);
        }
    }
    return 0;
}
