#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i;
    string str;
    cin>>n>>k;

    cin>>str;

    for(i=0; i<n; i++)
    {
        if(str[i]=='o')
        {
            k++;
        }
        else
        {
            k--;
            k = max(0,k);
        }

    }

    cout<<k<<endl;
    return 0;
}
