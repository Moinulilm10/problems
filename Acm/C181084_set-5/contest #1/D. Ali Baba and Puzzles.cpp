#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c, result;
    int flag = 0;
    cin>>a>>b>>c>>result;

    long long myResult1 = (a * b) - c;
    long long myResult2 = (a * b) + c;
    long long myResult3 = a + (b * c);
    long long myResult4 = a - (b * c);
    long long myResult5 = (a - b) + c;
    long long myResult6 = (a + b) - c;

    if(myResult1 == result || myResult2 == result || myResult3 == result ||
            myResult4 == result || myResult5 == result || myResult6 == result )
    {
        flag = 1;
    }

    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
