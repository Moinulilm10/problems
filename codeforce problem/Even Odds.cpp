#include<iostream>
using namespace std;

int main()
{
    long long int n, k, p;

    cin>>n>>k;

    if(n%2==0)
    {
        p = n/2;
    }
    else
    {
        p = (n/2)+1;
    }
    if(k<=p)
    {
        cout<<2*k-1<<"\n";
    }
    else
        cout<<(k-p)*2<<"\n";
}

