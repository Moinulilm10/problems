#include<stdio.h>
#include<string.h>

void print_rev(char s[])
{
    int i;
    for(i=strlen(s)-1; i>=0; i--)
    {
        printf("%c",s[i]);
    }
}

int main()
{
    int t,i,j,k;
    char s[1002],w[1002];
    scanf("%d",&t);
    for(i=1 ; i<=t; i++)
    {
        scanf(" %[^\n]",s);
        for(j=0,k=0; j<strlen(s); j++)
        {
            if(s[j] != ' ')
            {
                w[k]=s[j];
                k++;
            }
            else if(k>0)
            {
                w[k]= '\0';
                printf("%s",w);
                k=0;
            }
        }
        if(k>0)
        {
            w[k]='\0';
            print_rev(w);
        }
    }
    return 0;
}
