#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr, cnt = 0;
        int n;
        cin >> n;
        while (n--)
        {
            cin >> arr;
            cnt += arr - 1;
        }
        if (cnt & 1)
            cout << "errorgorn" << endl;
        else
            cout << "maomao90" << endl;
    }

    return 0;
}