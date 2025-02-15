#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t,d,cnt=0;
  printf("%d %d",&t,&d);
  while(t--)
  {
      long long p,q;
      scanf("%lld %lld",&p,&q);

      long long point = (p*p) + (q*q);

      if(point <= d*d)
      {
          cnt++;
      }


  }
   printf("%d\n",cnt);
   return 0;
}
