#include <bits/stdc++.h>
using namespace std;

int a[2000005];
int n, k;

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    if (a[k] == a[k + 1] || k == 0 && a[1] == 1)
        cout << -1;
    else if (k == 0 && a[1] > 1)
        cout << 1;
    else
        cout << a[k];
    return 0;
}