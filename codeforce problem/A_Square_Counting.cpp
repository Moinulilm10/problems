#include <bits/stdc++.h>
using namespace std;

long long n, s, tNum;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> s;
        tNum = s / (n * n);
        cout << tNum << endl;
    }

    return 0;
}