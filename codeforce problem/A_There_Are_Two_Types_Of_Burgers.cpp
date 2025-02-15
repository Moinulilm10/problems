#include <bits/stdc++.h>
using namespace std;

int b, p, f;
int h, c;
int hum = 0, chick = 0;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> b >> p >> f;
        cin >> h >> c;

        if (h > c)
        {
            hum = min(b / 2, p);
            b = b - hum * 2;
            chick = min(b / 2, f);
        }
        else
        {
            chick = min(b / 2, f);
            b = b - chick * 2;
            hum = min(b / 2, p);
        }

        int ans = (hum * h) + (chick * c);
        cout << ans << endl;
    }

    return 0;
}