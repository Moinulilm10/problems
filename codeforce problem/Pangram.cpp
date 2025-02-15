#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
#define MOD 1000000007
#define MAX 100007

int main()
{
    ios;

    int n;
    cin>>n;

    string str;
    cin>>str;

    vector<int>counts(26);
    for(char i : str)
    {
        if(i >= 'a' && i <= 'z')
            counts[i - 'a']++;
        else if(i >= 'A' && i <= 'Z')
            counts[i - 'A']++;
    }

    int zero = count(begin(counts),end(counts),0);

    if(zero > 0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
