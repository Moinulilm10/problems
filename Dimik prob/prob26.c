#include<stdio.h>

int main()
{
    int t;
    double sup;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&sup);
        int cou = 0;
        while(sup > 1.0)
        {
            sup = sup / 2;
            cou++;
        }
        printf("%d days\n",cou);
    }
    return 0;
}
