#include<bits/stdc++.h>
using namespace std;

void isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main()
{
    char str[1001];
    cin>>str;
    isPalindrome(str);

    return 0;
}
