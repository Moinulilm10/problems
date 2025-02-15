#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sh,sm,eh,em;
        cin>>sh>>sm>>eh>>em;

        int dh, dm;

        sh = sh*60;
        eh = eh*60;

        int total = (eh+em)-(sh+sm);

        int rem_h = total/60;

        int rem_min = total%60;

        cout<<rem_h<<" "<<rem_min<<endl;
    }

}
