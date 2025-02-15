#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int p;
    int q;
    int cou=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>p>>q;
        if((q-p) >= 2)
        {
            cou++;
        }
    }
    cout<<cou<<"\n";
}
