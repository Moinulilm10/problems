#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, c=0, sum=0;
    int n, s, w;
    cin>>n>>s>>w;
    int a;
    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a>s)
        {
            continue;
        }

        else
        {
            sum+=a;
            if(sum>w)
            {
                c++;
                sum=0;
            }
        }

    }
    cout<<c<<"\n";

}
