#include <stdio.h>
#include <string.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    getchar();

    while(T--)
    {
        char first_line[10001];
        gets(first_line);

        char ch;
        scanf("%c",&ch);
        getchar();

        int count=0;
        for( i=0; i<strlen(first_line); i++)
        {
            if(first_line[i]==ch)
            {
                count++;
            }
        }
        if(count!=0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n",ch, first_line,count);
        }
        else
        {
            printf("'%c' is not present\n",ch);
        }
    }
    return 0;
}
