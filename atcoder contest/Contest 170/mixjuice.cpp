#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;


    int n,k,a,sum=0;
    cin>>n>>k;

    vector<int>v;

    for(int i=0; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());



        //sum = accumulate(v.begin(), v.end()-k,0);
        //cout<<sum<<endl;

    for(int i=0; i<k; i++)
    {
        sum  += v[i];
    }
    cout<<sum<<endl;

    return 0;
}

