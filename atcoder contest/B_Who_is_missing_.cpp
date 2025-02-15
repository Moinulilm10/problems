#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, range, count = 0;
    cin >> a;
    range = (a * 4) - 1;
    int arr[range];

    for (int i = 0; i < range; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + range);
    count = -1;
    for (int i = 1; i <= a; i++)
    {
        count += 4;
        if (arr[count] != i)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}