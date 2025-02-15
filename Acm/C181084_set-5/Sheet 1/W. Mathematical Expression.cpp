#include<bits/stdc++.h>
using namespace std;

main()
{
    int a, b, c;
    char op, eq;

    cin >> a >> op >> b >> eq >> c;

    if (op == '+')
    {
        if ( a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a + b;
        }

    }
    else if (op == '-')
    {
        if ( a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a - b;
        }
    }
    else if (op == '*')
    {
        if ( a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a * b;
        }
    }
    else
    {
        if ( a / b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << a / b;
        }
    }
}
