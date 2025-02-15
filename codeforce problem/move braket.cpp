#include <bits/stdc++.h>

using namespace std;

stack<int> st;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;


        for(int i=0; i<n; i++)
        {
            if(s[i]=='(')
                st.push('(');
            else
            {
                if(!st.empty())
                    st.pop();

            }
        }
        cout<<st.size()<<endl;
    }
}
