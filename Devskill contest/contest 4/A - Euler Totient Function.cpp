#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100007
#define endl "\n"
#define ll long long

int phi(int n) {
    int result = n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",phi(n));
    }

    return 0;
}
