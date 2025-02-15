#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    int len, cntz=0, cnto=0;
    cin>>len;

    string str;
    cin>>str;

    for(int i=0; i<len; i++)
    {
        if(str[i]=='0')
        {
            cntz++;
        }
        if(str[i]=='1')
        {
            cnto++;
        }
    }
    if(cntz==cnto)
    {
        cout<<0<<endl;
    }
    else
        cout<<abs(cnto-cntz)<<endl;

    return 0;
}
