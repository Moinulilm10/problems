#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> arr(7);

        for (int i = 0; i < 7; i++)
            cin >> arr[i];

        cout << arr[0] << ' ' << arr[1] << ' ' << arr[6] - arr[0] - arr[1] << endl;
    }
}