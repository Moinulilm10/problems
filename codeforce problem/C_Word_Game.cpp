#include <bits/stdc++.h>
using namespace std;
#define newline "\n"
#define pi 3.141592653589
#define mod 1e9 + 7
#define ll long long int

// int total = 0;

void solve()
{
    // write solution here
    int n;
    cin >> n;
    map<string, int> mp;
    string arr[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        int total = 0;
        for (int j = 0; j < n; j++)
        {
            if (mp[arr[i][j]] == 1)
                total += 3;
            else if (mp[arr[i][j]] == 2)
                total++;
        }
        cout << total << " ";
    }
    cout << newline;
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