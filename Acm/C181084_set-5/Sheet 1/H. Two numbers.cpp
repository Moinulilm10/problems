#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,result;

    cin>>a>>b;

    result = a / b;

    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(result)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(result)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(result)<<endl;


    return 0;
}
