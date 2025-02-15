#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    double d, f, sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>d;
        sum += d;
        f = sum/n;
    }


    printf("%.12lf\n", f);

}
