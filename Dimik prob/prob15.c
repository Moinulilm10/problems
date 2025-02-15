#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,k;
    char c[26];
    char s[1000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int len = 0;

        scanf(" %[^\n]%*c",s);

        len = strlen(s);

        for(j=0 ; j<26; j++)
        {
            c[j]=0;
        }

        for(k=0; k<len; k++)
        {
            if(s[k]>='a' && s[k]<='z')
            {
                c[s[k]-'a']++;
            }
        }


        for(j=0; j<26; j++)
        {
            if(c[j] != 0)
            {
                printf("%c = %d\n",('a'+j),c[j]);
            }
        }
        if(i<t-1)
        {
            printf("\n");
        }
    }

    return 0;
}
