#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        long long int sum=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                if(i==n)
                {
                    break;
                }
                sum+=i;

            }

        }
        if(n==sum)
        {
            printf("YES, %d is a perfect number !\n",n);
        }
        else
        {
            printf("NO, %d is not a perfect number!\n",n);
        }



        return 0;
    }
}
