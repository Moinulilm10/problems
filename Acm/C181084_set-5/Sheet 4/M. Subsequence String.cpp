#include <bits/stdc++.h>
using namespace std;

int check_subsequence(char a[], char b[])
{
    int c, d;
    c = d = 0;
    while (a[c] != '\0')
    {
        while ((a[c] != b[d]) && b[d] != '\0')
        {
            d++;
        }
        if (b[d] == '\0')
            break;
        d++;
        c++;
    }
    if (a[c] == '\0')
        return 1;
    else
        return 0;
}


int main()
{
    int flag;
    char *s2;
    char s1[1000] = "hello";
    s2 = (char *)malloc(10000000);
    gets(s2);
    if (strlen(s1) < strlen(s2))
        flag = check_subsequence(s1, s2);
    else
        flag = check_subsequence(s2, s1);
    if (flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

