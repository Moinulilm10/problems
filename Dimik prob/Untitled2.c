#include <stdio.h>
#include <string.h>
int main()
{
    char string[1000];
    int c = 0, x, t, count[26],i;

    scanf("%d",&t);
    while(t--)
    {

        gets(string);

        while (string[c] != '\0')
        {
            /** Considering characters from 'a' to 'z' only and ignoring others. */

            if (string[c] >= 'a' && string[c] <= 'z')
            {
                x = string[c] - 'a';
                count[x]++;
            }

            c++;
        }
        for(c=0; c<26; c++)
        {
            count[c]=0;
        }


        for (c = 0; c < 26; c++)
            printf("%c = %d\n", (c + 'a'), count[c]);
    }

    return 0;
}
