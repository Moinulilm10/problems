#include<bits/stdc++.h>
using namespace std;

int main()
{
   int m, n;

   cin>>m>>n;

   if(m%2==0 && n%2 ==0)
   {
       cout<<(m*n)/2<<"\n";
   }
   else if(m%2!=0 && n%2!=0)
   {
       cout<<((m*n)-1)/2<<"\n";
   }
   else{
    cout<<(m*n)/2<<"\n";
   }
}
