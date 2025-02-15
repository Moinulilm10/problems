#include<bits/stdc++.h>
using namespace std;


long long int divSum(long long int n)
{
    if(n == 1)
        return 1;
    long long int result = 0;


    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
                result += i;
            else
                result += (i + n/i);
        }
    }
    return (result + n + 1);
}
int main()
{
    long long int n ;
    cin>>n;
    cout << divSum(n);
    return 0;
}
