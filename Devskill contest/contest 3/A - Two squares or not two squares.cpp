#include<bits/stdc++.h>
using namespace std;

void sqrtNumber(long long N)
{
    long long  x , y=0;
    x = sqrt(N);

    while(x>0)
    {
        if(y*y>N)
        {
            printf("No\n");
            break;
        }
        else if(x*x + y*y == N)
        {
            printf("Yes\n");
            break;
        }
        else if(x*x + y*y < N)
        {
            y++;
        }
        else
        {
            x--;
        }
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        sqrtNumber(n);
    }
    return 0;
}
