#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,user="",pass="",prof="",role="",key="";
    cin>>s;
    int n;
    for(int i=0; s[i] != '?'; i++)
    {
        n=i;
    }
    n++;
    for(int i=n+10; s[i] != '&'; i++)
    {
        user=user+s[i];
        n=i;
    }
    n++;
    for(int i=n+5; s[i] != '&'; i++)
    {
        pass=pass+s[i];
        n=i;
    }
    n++;
    for(int i=n+9; s[i] != '&'; i++)
    {
        prof=prof+s[i];
        n=i;
    }
    n++;
    for(int i=n+6; s[i] != '&'; i++)
    {
        role=role+s[i];
        n=i;
    }
    n++;
    for(int i=n+5; s[i] != '\0'; i++)
    {
        key=key+s[i];
    }
    cout<<"username: "<<user<<endl;
    cout<<"pwd: "<<pass<<endl;
    cout<<"profile: "<<prof<<endl;
    cout<<"role: "<<role<<endl;
    cout<<"key: "<<key<<endl;

    return 0;

}
