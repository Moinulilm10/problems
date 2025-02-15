#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, gt=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        gt = __gcd(x,gt);
    }

    cout<< gt <<endl;
    return 0;
}
