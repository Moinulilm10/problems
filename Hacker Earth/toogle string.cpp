#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    for(int i=0; i<str.size(); i++)
    {
        int c = str[i];
        if(islower(c))
        {
            str[i] = toupper(c);
        }
        else if(isupper(c))
        {
            str[i] = tolower(c);
        }
    }
    cout<<str<<"\n";
}
