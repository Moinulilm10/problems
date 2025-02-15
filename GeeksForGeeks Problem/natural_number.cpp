#include <bits/stdc++.h>
using namespace std;
#define newline "\n"

int main()
{
    std ::ios ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    cout << sum << endl;

    return 0;
}