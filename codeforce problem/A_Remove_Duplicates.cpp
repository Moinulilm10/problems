#include <bits/stdc++.h>
using namespace std;

int n;

vector<int> arr(10001);

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}