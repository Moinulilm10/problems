#include <bits/stdc++.h>
using namespace std;

int main()
{
    int twoDigitCount, threeDigitCount, fiveDigitCount, sixDigitCount;
    long long sum = 0;
    cin >> twoDigitCount >> threeDigitCount >> fiveDigitCount >> sixDigitCount;

    while (twoDigitCount >= 1)
    {
        if (fiveDigitCount >= 1 && sixDigitCount >= 1)
        {
            sum += 256;
            twoDigitCount--;
            fiveDigitCount--;
            sixDigitCount--;
        }
        else if (twoDigitCount >= 1 && threeDigitCount >= 1)
        {
            sum += 32;
            twoDigitCount--;
            threeDigitCount--;
        }
        else
        {
            break;
        }
    }
    cout << sum << endl;

    return 0;
}