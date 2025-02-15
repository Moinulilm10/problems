#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    string num;
    cin>>num;
    for(int i=0; i<num.size(); i++)
    {
        if(num[i]=='7' || num[i]=='4')
        {
            cnt++;
        }
    }
    if(cnt == 4 || cnt == 7)
        cout<<"YES"<<"\n";

    else
        cout<<"NO"<<"\n";

}
