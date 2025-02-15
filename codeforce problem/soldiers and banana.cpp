#include<iostream>
using namespace std;

int main()
{
    int k,  w, sum=0, need;
    int n;

    cin>>k>>n>>w;
    for(int i=0; i<=w; i++)
    {
        sum+=i*k;
    }
    if(sum>n)
    {
        need = sum-n;
    }
    cout<<need<<endl;
}
