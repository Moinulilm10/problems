#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], am = 0, bm = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
            am = max(am, a[i]);
            bm = max(bm, b[i]);
        }

        cout << am * bm << endl;
    }

    return 0;
}