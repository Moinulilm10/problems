#include<bits/stdc++.h>
using namespace std;

int main()
{
    char letter;
    cin>>letter;

    char askLetter = letter;
    if(askLetter == 122)
    {
        cout<<"a"<<endl;
        return 0;
    }

    letter++;

    cout<<letter<<endl;

    return 0;
}
