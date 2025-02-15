#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, b, cap = 0, maxx=0;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        cap += b - a;
        if(cap > maxx) maxx = cap;
    }
    printf("%d\n", maxx);
    return 0;
}
