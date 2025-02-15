#include<iostream>
using namespace std;

int main()
{
    int n, h, ph, sum=0;
    cin>>n>>h;
    for(int i=0; i<n; i++)
    {
        cin>>ph;
        if(ph>h)
            sum+=2;
        else
            sum++;
    }
    cout<<sum<<endl;
}
