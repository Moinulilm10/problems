#include <bits/stdc++.h>
using namespace std;
int main()
{
    char key[]= "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char original[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    string s;
    cin>>q>>s;
    if(q==1)
    {
        for(int i=0;s[i]!='\0';i++)
        {
            for(int j=0;j<62;j++)
            {
                if(s[i]==original[j])
                {
                    s[i]=key[j];
                    break;
                }
            }
        }
        cout<<s;
    }
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
            for(int j=0;j<62;j++)
            {
                if(s[i]==key[j])
                {
                    s[i]=original[j];
                    break;
                }
            }
        }
        cout<<s;

    }
}
