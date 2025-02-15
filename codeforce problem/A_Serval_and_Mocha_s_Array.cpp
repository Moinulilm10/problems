#include <bits/stdc++.h>
using namespace std;
#define newline "\n"
#define pi 3.141592653589
#define mod 1e9 + 7
#define ll long long int

void solve()
{
    // write solution here
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(a[i], a[j]) <= 2)
            {
                cout << "Yes" << endl;
                goto ok;
            }
        }
    }
    cout << "No" << endl;
ok:;
}

int main()
{
    std ::ios ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}