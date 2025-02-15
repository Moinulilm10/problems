#include <bits/stdc++.h>
using namespace std;

int x, y;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (x < y)
        {
            int moves = x + y + 2 * ((y - x) / 2);
            cout << moves << endl;
        }
        else
        {
            int moves = x + y + 2 * (((x - y) + 1) / 2);
            cout << moves << endl;
        }
    }

    return 0;
}