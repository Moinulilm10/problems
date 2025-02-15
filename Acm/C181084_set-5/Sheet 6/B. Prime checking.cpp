#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    if (n < 2) return false;

    for(int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    scanf("%lld",&n);
    if(isPrime(n))
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

}
