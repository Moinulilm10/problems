#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n&1)
        {
            printf("Odd\n");
        }
        else if((n/2)&1)
        {
            printf("Same\n");
        }
        else
        {
            printf("Even\n");
        }
    }

    return 0;
}
