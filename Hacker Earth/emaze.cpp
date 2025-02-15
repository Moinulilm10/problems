#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int32_t main()
{
    int x = 0;
    int y = 0;
    int i=0;
    string str;

    cin>>str;

    while(str[i]!='\0')
    {

        switch(str[i])
        {
        case 'L':
            x = x-1;
            break;
        case 'D':
            y = y-1;
            break;
        case 'R':
            x = x+1;
            break;
        case 'U':
            y = y+1;
        default:
            break;
        }
        ++i;
    }

    cout<<x<<" "<<y<<endl;

}
