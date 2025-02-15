#include<bits/stdc++.h>
using namespace std;

int main()
{
    char cha;
    scanf("%c",&cha);

    if(isdigit(cha))
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if(isupper(cha))
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }

    else if(islower(cha))
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;

    }

    return 0;
}
