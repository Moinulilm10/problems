#include<iostream>
using namespace std;

int main()
{
    int n,output;
    cin>>n;
    if(n<=5)
    {
        cout<<"1"<<endl;
    }
    else
    {
        if(n%5==0)
        {
            output = n/5;
            cout<<output<<endl;
        }

        else if(n>5 && n%5 != 0)
        {
            output = (n/5)+1;
            cout<<output<<endl;
        }
    }
}

