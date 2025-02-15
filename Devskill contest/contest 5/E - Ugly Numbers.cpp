#include<bits/stdc++.h>
using namespace std;

long long divide(int a, int b)
{
    while(a%b == 0)
    {
        a=a/b;
        return a;
    }
}

long long isUgly(int number)
{
    number = divide(number, 2);
    number = divide(number, 3);
    number = divide(number, 5);

    return
}

int main()
{
    long long uglyNumber = 0, cnt = 1;
    for(int i=1; cnt<=1500; i++)
    {
        uglyNumber++;
        if(Ugly(uglyNumber))
            cnt++;
    }

    printf("The 1500'th ugly number is %lld.", uglyNumber);
    return 0;
}



