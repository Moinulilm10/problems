#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int l=0;
    int h = str.size() - 1;

    bool flag = 1;

    while(h>l)
    {
        if(str[l++]!=str[h--])
        {
            flag = 0;
            break;

        }
    }
    if(flag == 1)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }

}
