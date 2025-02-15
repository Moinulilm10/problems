#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cou=0, pos=1;
    string str;
    string t;
    cin>>str;
    cin>>t;
    for(int i=0; i<t.size(); i++)
    {
        if(t[i]==str[cou])
        {
            pos++;
            cou++;
        }
    }
    cout<<pos<<endl;
}
