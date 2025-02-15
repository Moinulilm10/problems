#include <bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589)
#define mod 1e9 + 7
#define ll long long int
// #define rep(i, n) for (int i = n - 1; i >= 0; i--)
// #define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fast

        int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> a;
        for (int i = 1; i * i <= n; i++)
        {
            a.insert(i * i);
        }
        for (int i = 1; i * i * i <= n; i++)
        {
            a.insert(i * i * i);
        }
        cout << a.size() << "\n";
    }
    return 0;
}