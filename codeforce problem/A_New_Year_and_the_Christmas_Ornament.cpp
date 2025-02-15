#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, b, r;
    cin >> y >> b >> r;
    int ans = 0;

    for (int i = 0; i <= y; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            for (int k = 0; k <= r; k++)
            {
                if ((k - j) == 1 && (j - i) == 1)
                {
                    ans = max(ans, k + i + j);
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}