#include <bits/stdc++.h>
using namespace std;
#define newline "\n"
#define pi 3.141592653589
#define mod 1e9 + 7
#define ll long long int

void solve()
{
    // write solution here
    string str = "Timur", str1;
    sort(str.begin(), str.end());
    int n;
    cin >> n;
    cin >> str1;
    sort(str1.begin(), str1.end());
    if (str == str1)
        cout << "YES" << newline;
    else
        cout << "NO" << newline;
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
