#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    int n, cnt = 0;

    scanf("%d", &n);

    vector<int>nums(n);

    for(int i=0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

   // sort(nums.begin(),nums.end());

    for(int i=0; i < n; i++)
    {
        if(nums[i] != nums[0] && nums[i] != nums.back())
        {
            cnt++;
        }
    }

    printf("%d\n", cnt);


    return 0;
}

