#include <bits/stdc++.h>
using namespace std;
#define newline "\n"
#define pi 3.141592653589
#define mod 1e9 + 7
#define ll long long int

int can_have_conversation(int n, int m, int k, int H, int h[])
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int difference = abs(h[i] - H);
        if (difference >= 0 && difference % k == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int h[n];
        for (int j = 0; j < n; j++)
        {
            cin >> h[j];
        }
        cout << can_have_conversation(n, m, k, H, h) << endl;
    }
    return 0;
}