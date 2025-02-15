#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, p = 0;
    cin >> n >> k;

    while (k <= 240 && p <= n)
    {
        p++;
        // cout << "p is :" << p << endl;
        k += 5 * p;
        // cout << "k is : " << k << endl;
    }
    cout << p - 1 << endl;

    return 0;
}