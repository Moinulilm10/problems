#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int V[5],cou=0;
    for(int i=0; i<4; i++)
    {
        cin>>V[i];
    }
    sort(V,V+4);
    for(int i=0; i<3; i++)
    {
        if(V[i]==V[i+1])
            cou++;
    }
    cout<<cou<<"\n";
   return 0;
}

