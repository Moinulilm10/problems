#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int l,r,s, ans1;
        cin>>l>>r>>s;

         double ans = l/s;
         ans1 = r/s;

        int ans2 = ceil(ans);

        cout<<ans2<<" "<<ans1<<endl;
    }
}
