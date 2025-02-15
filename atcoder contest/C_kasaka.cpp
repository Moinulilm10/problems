#include <bits/stdc++.h>
using namespace std;

void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

// Driver program to test above function
int main()
{
    char str[1000001];
    for (int i = 0; i < 1000001; i++)
    {
        cin >> str[i];
    }

    isPalindrome(str);

    return 0;
}