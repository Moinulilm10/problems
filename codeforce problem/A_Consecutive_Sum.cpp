#include <bits/stdc++.h>
using namespace std;
#define newline "\n"
#define pi 3.141592653589
#define mod 1e9 + 7
#define ll long long int

void solve()
{
    // write solution here
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        a[i % k] = max(a[i % k], t);
    }
    ll ans = 0;
    for (int i = 0; i < k; i++)
        ans += a[i];
    cout << ans << "\n";
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