#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>>t;
    for(int i=0; i<t; i++)
    {
        int cnt=0;
        string str;
        cin>>str;
        if(str[i]=='AC')
        {
            cnt++;
        }
        else if(str[i]=='WA')
        {
            cnt++;
        }
        else if(str[i]=='TLE')
        {
            cnt++;
        }
        else if(str[i]=='RE')
        {
            cnt++;
        }
        cout<<cnt<<endl;
    }

}
