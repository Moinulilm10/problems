#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}

int main()
{
    int n, k;
    cin>>n>>k;

    int m = n+1;

    while(!isPrime(m))
    {
        m+=1;
    }
    cout<<(k==m ? "YES" : "NO" )<<"\n";
}
