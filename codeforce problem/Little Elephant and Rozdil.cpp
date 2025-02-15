#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long

int k,cnt=0;
int32_t main()
{
       int n;
       cin>>n;

       vector<int>v;
       for(int i=0; i<n; i++)
       {
           cin>>k;
           v.push_back(k);
       }
      int mine = count(v.begin(), v.end(),*min_element(v.begin(), v.end()));


      if(mine == 1)
      {
          cout<<(min_element(v.begin(), v.end())-v.begin())+1<<endl;
      }
      else{
        cout<<"Still Rozdil"<<endl;
      }

}
