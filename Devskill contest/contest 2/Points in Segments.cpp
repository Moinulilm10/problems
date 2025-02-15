#include <bits/stdc++.h>
using namespace std;



vector<int>v;

int main()
{


    int t,n,q,arr,cnt=1;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &n, &q);
        v.clear();
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr);
            v.push_back(arr);
        }
        printf("Case %d:\n", cnt++);
        while(q--)
        {
            int l,r;
            scanf("%d %d", &l, &r);
            int ub = upper_bound(v.begin(),v.end(),r)-v.begin();
            int lb = lower_bound(v.begin(), v.end(),l)-v.begin();

            printf("%d\n", ub-lb);
        }
    }


    return 0;
}

