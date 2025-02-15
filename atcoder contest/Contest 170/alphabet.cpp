#include<iostream>
using namespace std;

//#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define endl "\n"
//#define ll long long

int main()
{
    //ios;

    string str;
    cin>>str;

    int len = str.size();
    for(int i=0; i<len; i++)
    {
        int c = str[i];

        if(isupper(c))
        {
            cout<<"A"<<endl;
        }
        else if(islower(c))
        {
            cout<<"a"<<endl;
        }
    }
    return 0;
}

