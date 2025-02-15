#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        if(n==2)
        {
            printf("2 1");
        }
        else
        {
            for(int i=3; i<n; i+=2)
            {
                printf(" %d %d", i+1, i);
            }

        }
    }
    return 0;

}
