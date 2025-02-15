#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, remainder;
        cin >> n;
        if (n != 0)
        {
            while (n != 0)
            {
                remainder = n % 10;
                cout << remainder << " ";
                n = n / 10;
            }
            cout << endl;
        }
        else
        {
            cout << 0 << endl;
        }
        }
}
