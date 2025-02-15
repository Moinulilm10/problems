#include<bits/stdc++.h>
using namespace std;

int main()
{
   double x,p;
   cin>>x>>p;

   double pre = 100 - x;
   double priceResult = p / pre;
   double result = (x*priceResult) + p;

   cout<<result<<endl;

    return 0;
}
