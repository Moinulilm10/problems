#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;

    scanf("%d",&n);

    for(int i=1; i<=12; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
