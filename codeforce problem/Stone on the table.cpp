#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    char col[50];
    cin>>n;
    cin>>col;
    for(int i=0 ; i<n-1; i++)
    {
        if(col[i]==col[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
