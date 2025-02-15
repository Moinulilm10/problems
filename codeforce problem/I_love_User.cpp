#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, a, b, cnt=0;
    int n;
    cin>>n;
    cin>>num;

    a = num;
    b = num;

    for(int i=1; i<n; i++)
    {
        cin>>num;

        if(num>a)
        {
            a=num;
            cnt++;
        }
        else if(num<b)
        {
            b=num;
            cnt++;
        }

    }
    cout<<cnt;
}
