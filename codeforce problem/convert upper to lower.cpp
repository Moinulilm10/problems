#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    cin>>str;
    for (int i=0; i<strlen(str); i++)
    {
        if (isupper(str[i]))
            /*  Converting uppercase characters to lowercase  */
            str[i] = str[i] + 32;
    }

    cout << str;
    return 0;
}

