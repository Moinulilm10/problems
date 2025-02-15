#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,p;

    cin>>n>>i>>j>>p;



    for(int k=0; k<n; k++)

    {

        for(int k1=0; k1<n; k1++)

        {

            int ans=p-max(abs(i-k),abs(j-k1));

            if(ans<0)

                cout<<0<<" ";

            else

                cout<<ans<<" ";

        }

        cout<<endl;

    }
}
