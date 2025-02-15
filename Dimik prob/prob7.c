#include<stdio.h>
#include<string.h>

int count_number(char line[])
{
    int i, len, count=0;
    len = strlen(line);

    for(i=0; i<len;)
    {
        if(line[i] == ' ')
        {
            while(line[i] == ' ')
            {
                i++;
            }
            count += 1;
        }
        else
        {
            i++;
        }
    }
    return count+1;

}

int main()
{
    int i, t, count;
    char line[100000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf(" %[^\n]",line);
        count = count_number(line);
        printf("%d\n",count);
    }


    return 0;
}
