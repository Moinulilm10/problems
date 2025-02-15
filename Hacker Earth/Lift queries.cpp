#include<bits/stdc++.h>
using namespace std;

int a=1, b=7, n, p, q;
int main()
{
    int t;
    while(t--)
    {
        cin>>n;
        p = n-a;
        q = n-b;
        if(n<0){
            n = n* (-1);
        }
        if(p>q)
        {
            cout<<"B"<<"\n";
            b=n;
        }
        else if(q>p)
        {
            cout<<"A"<<"\n";
            a=n;
        }
        else
        {
            if(a>b)
            {
                cout<<"B"<<"\n";
                b=n;
            }
            else
            {
                cout<<"A"<<"\n";
                a=n;
            }
        }
    }

    return 0;

}
