#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin>>n>>x;
    x = x * 100;
    double v, p;
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v>>p;
        sum += v*p;
        if(sum>x)
        {
            cout<<i+1<<endl;
            return 0;
        }

    }
    puts("-1");
    return 0;
}
