#include<bits/stdc++.h>
using namespace std;

bool cmp(string x,string y)
{
    if(x.size()==y.size())
    {
        return x<y;
    }
    return x.size()<y.size();
}

int main()
{
    vector<string>s;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        s.push_back(a);
    }
    sort(s.begin(),s.end(),cmp);

    for(int i=0; i<n; i++)
    {
        cout<<s[i]<<endl;
    }
}
