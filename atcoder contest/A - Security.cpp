#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int flag = 0;
    for(int i=0; i<3; i++)
    {
        if(str[i]==str[i+1])
        {
            flag = 1;
        }
    }

    if(flag==1)
    {
        cout<<"Bad"<<endl;
    }
    else
    {
        cout<<"Good"<<endl;
    }


    return 0;
}
