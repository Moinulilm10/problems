#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long sumB = a[0];
        long long sumR = 0;
        long long l = 1;
        long long r = n - 1;
        while (r - l >= 1 && sumR <= sumB)
        {
            sumR += a[r--];
            sumB += a[l++];
        }
        if (sumR > sumB)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}