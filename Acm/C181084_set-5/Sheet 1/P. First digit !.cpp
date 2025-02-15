#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int len = n.size();
    for(int i=0; i<len; i++)
    {
        if(n[0]%2==0)
        {
            cout<<"EVEN"<<endl;
            break;
        }
        else if(n[0]%2!=0)
        {
            cout<<"ODD"<<endl;
            break;
        }
    }
    return 0;
}
