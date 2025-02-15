#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0, sum=0;
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y')
        {
            cnt=1;

        }
        else{
            sum = str[i]+str[i+1];
            if(sum%2==0)
            {
                cnt=0;
            }
            else{
                cnt=1;
            }
        }
        if(cnt=0)
        {
            cout<<"valid"<<endl;
            break;
        }
        else
        {
            cout<<"invalid"<<endl;
            break;
        }
    }
    return 0;
}
