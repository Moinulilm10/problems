#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char opr;

    cin>>a>>opr>>b;

    switch(opr)
    {
    case '=':
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
        break;
    case '>':
        if(a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
        break;
    case '<':
        if(a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
        break;
    }

    return 0;
}
