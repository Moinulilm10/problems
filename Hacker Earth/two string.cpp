#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string str;
        string str1;

        cin>>str>>str1;

         sort(str.begin(), str.end());
         sort(str1.begin(), str1.end());

        if(str==str1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }



    return 0;
}

