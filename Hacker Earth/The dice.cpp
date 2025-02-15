#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define en "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    string str;

    cin >> str;

    int len = str.size();

    int n = count(str.begin(),str.end(), '6');

    if(n==len || str[len-1]=='6')
    {
        cout<<"-1"<<en;
    }
    else{
        cout<<len-n<<en;
    }

    return 0;
}

