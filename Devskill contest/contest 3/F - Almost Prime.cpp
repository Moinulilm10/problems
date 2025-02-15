#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define ll long long


int main()
{
    int n,num[30001],cnt=0;
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
    {
         if(num[i]==0)
         {
             for(int j=i; j<=n; j+=i)
             {
                 num[j]++;

             }
         }
         if(num[i]==2)
            cnt++;
    }
    printf("%d\n",cnt);

    return 0;
}

