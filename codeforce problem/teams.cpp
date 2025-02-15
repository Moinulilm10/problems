#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    int a, b, c;
    for(int i=0 ; i<n; i++)
    {
        cin>>a>>b>>c;
        if((a+b+c) > 1)
        {
            cnt++;
        }
    }


    cout<<cnt<<"\n";
}
