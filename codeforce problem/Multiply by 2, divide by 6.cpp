#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n,cnt1=0, cnt2=0;

        cin>>n;

        while(n%2==0)
        {
            n/=2;
            cnt1++;
        }
        while(n%3==0)
        {
            n/=3;
            cnt2++;
        }
        if(n==1 && cnt1<=cnt2)
        {
            cout<<2*cnt2-cnt1<<"\n";
        }
        else{
           cout<<-1<<"\n";
        }



    }



    return 0;
}
