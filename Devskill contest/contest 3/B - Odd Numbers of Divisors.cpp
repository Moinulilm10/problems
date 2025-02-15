#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
         int k, low , high,div=0;
         scanf("%d %d %d",&k, &low, &high);
         for(int i=low; i<=high; i++)
         {
             if(i%k==0)
             {
                 div++;
             }
         }
         printf("%d",div);
    }

    return 0;
}
