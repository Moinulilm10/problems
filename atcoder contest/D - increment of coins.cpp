#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, res;
    cin>>a>>b>>c;

    res = (100 - a)*(a/a+b+c) + (100 - b)*(b/a+b+c) + (100 - c)*(c/a+b+c);

    printf("%.9f\n",res);
    return 0;
}
