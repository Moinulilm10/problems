#include<bits/stdc++.h>
using namespace std;

int main() {
   string roll[6]={"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
   int y,w;
   cin>>y>>w;
   int x = max(y,w);
   cout<<roll[6-x];

   return 0;
}
