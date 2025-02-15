#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,t=0;
    cin>>d;
    for(int i=0; i<d; i++)
    {
        int r,x;
        cin>>r>>x;

        double b = x*100;
        double a = (((float)22/7)*2)*((float)r);

        if(b>=a)
        {
            t++;
        }
    }
    cout<<t<<endl;
}
