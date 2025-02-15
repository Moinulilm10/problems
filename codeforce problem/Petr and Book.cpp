#include<bits/stdc++.h>
using namespace std;

int n, day[8], i;
int main()
{
    cin>>n;
    for(int i=0; i<7; i++)
    {
        cin>>day[i];
    }
    while(n>0)
    {
        i = i%7;
        n = n - day[i];
        i++;
    }


    if(i%7==0)
    {
        cout<<7;
    }
    else
    {
        cout<<i%7;
    }
}
