#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007
#define test int t;scanf("%d",&t);

int main()
{
    ios;
    int n;
    cin>>n;
    long double ans = 0;
    pair<int, int>arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
        for(int j=0; j<i; j++)
        {
          long double x1 = arr[i].first, y1=arr[i].second, x2 = arr[j].first, y2=arr[j].second;
          ans = max(ans, (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        }

    }


    cout<<fixed<<setprecision(10)<<sqrt(ans)<<endl;

    return 0;
}
