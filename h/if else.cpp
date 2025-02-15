#include<iostream>
using namespace std;

int main()
{
    int in;
    string a[10]={"Greater than nine","one","two","three","four","five","six","seven","eight","nine"};
    cin>>in;
    if(in>9)
    {
        cout<<a[0];
    }
    else
    {
        cout<<a[in];
    }
    return 0;
}
