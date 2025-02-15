#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    int n, temp, c, v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        if(temp==100)
            c++;
        else if(v==200)
            v++;
    }
    if(c%2==1 || (v%2==1 && c<2))
    {
        cout<<"NO"<<endl;
    }

    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}

