#include<iostream>
using namespace std;

bool uniqueCharacters(string &str)
{


    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }


    return true;
}

int main()
{
    string str;
    cin>>str;



    for(int i=0; i<str.size(); i++)
    {
        if(uniqueCharacters(str))
        {
            cout<<str.size()<<endl;
        }

    }
}
