#include<bits/stdc++.h>
using namespace std;

unsigned int fact(unsigned n)
{
    if(n<=1)
        return 1;

    return n*fact(n-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<"\n";
}
