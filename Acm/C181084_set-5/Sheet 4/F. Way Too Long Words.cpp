#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int n, c=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>str;
        int len = strlen(str);
        if(len>10)
        {

            cout<<str[0]<<len-2<<str[len-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }

    }
}

