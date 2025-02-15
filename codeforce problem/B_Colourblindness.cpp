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
    string str1, str2;
    cin >> str1 >> str2;
    for (int i = 0; i < n; i++)
    {
        if (str1[i] == 'G')
            str1[i] = 'B';
        if (str2[i] == 'G')
            str2[i] = 'B';
    }
    if (str1 == str2)
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