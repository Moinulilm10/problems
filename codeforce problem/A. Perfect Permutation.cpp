#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    if(n%2 != 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("2 1");
        for(int i=3; i<n; i+=2)
        {
            printf(" %d %d", i+1, i);
        }
    }
    return 0;

}
