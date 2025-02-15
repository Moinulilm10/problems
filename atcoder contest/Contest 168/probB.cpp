#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    string str;
    cin>> str;

    int len = str.size();

    if(len > k)
    {
        str = str.substr(0,k) + "...";
    }
    cout<<str<<"\n";


}
