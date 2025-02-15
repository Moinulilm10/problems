#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin>>n;

    int nInt = n;

    double result = n - nInt;

    if(result != 0)
    {
        cout<<"float "<<nInt<<" "<<result<<endl;
    }
    else
    {
       cout<<"int "<<nInt<<endl;
    }

    return 0;
}
