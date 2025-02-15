#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    string str;
    string str1;

    cin>>str;
    cin>>str1;

    int len = str.size() - str1.size() + 1;

    for(int i=0; i<len; i++)
    {
        i = str.find(str1,i);
        if(i != string::npos)
        {
            cout<<i<<endl;
        }
        else
        {
           return 0;
        }
    }

    return 0;
}
