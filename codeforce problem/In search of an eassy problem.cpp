#include<iostream>

using namespace std;

int main()
{
    int n, c=0;
    string str;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>str;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='1')
            {
                c++;
            }
        }
    }
    if(c>=1)
    {
        cout<<"HARD"<<"\n";
    }
    else
        cout<<"EASY"<<"\n";

}
