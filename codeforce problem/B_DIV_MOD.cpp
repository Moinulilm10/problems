#include <bits/stdc++.h>
using namespace std;

long long l, r, a, result, maxx;
vector<long long> resultArrary;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> l >> r >> a;
        for (int i = l; i <= r; i++)
        {
            result = (i / a) + i % a;
            resultArrary.push_back(result);
        }
        for (int i = 0; i < resultArrary.size(); i++)
        {
            maxx = *max_element(resultArrary.begin(), resultArrary.end());
        }
        cout << maxx << endl;
    }

    return 0;
}