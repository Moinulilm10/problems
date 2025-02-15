#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

bool is_balanced(string &str)
{
    stack<char>s;

    int n = str.size();
    if(n%2 == 1)
        return 0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
            s.push(str[i]);
        }


        else if(str[i]==')' || str[i]=='}' || str[i]==']')
        {
            if(s.empty())
                return 0;
            else
            {
                if(str[i]== ')' && s.top()=='(')
                    s.pop();

                if(str[i]== '}' && s.top()=='{')
                    s.pop();

                if(str[i]== ']' && s.top()=='[')
                    s.pop();
            }
        }
    }
    return s.empty();
}

int main()
{
    ios;

    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string str;
        getline(cin,str);

        if(is_balanced(str)==1)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}

