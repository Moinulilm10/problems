#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int ans = 0;

    for(int i=0; i<n; i++)
    {
        int a=0, t=0, g=0, c=0;

        for(int j=i; j<n; j++)
        {
            if(str.at(j)=='A')
                a++;
            if(str.at(j)=='T')
                t++;
            if(str.at(j)=='G')
                g++;
            if(str.at(j)=='C')
                c++;
            if(a==t && g==c)
                ans++;
        }
    }

    cout<< ans <<endl;

    return 0;
}


