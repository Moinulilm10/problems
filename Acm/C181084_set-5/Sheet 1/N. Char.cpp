#include<bits/stdc++.h>
using namespace std;

int main()
{
    char cha;
    scanf("%c",&cha);

    if(isupper(cha))
    {
        cha=tolower(cha);
        cout<<cha<<endl;
    }
    else if(islower(cha))
    {
        cha=toupper(cha);
        cout<<cha<<endl;
    }

    return 0;
}
