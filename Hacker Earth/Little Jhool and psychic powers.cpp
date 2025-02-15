#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;

    std::string binDigit(100, ' ');
    scanf("%100s", &binDigit[0]);

    if(binDigit.find("000000")==-1 && binDigit.find("111111")==-1)
    {
        cnt = 1;
    }
    if(cnt == 0)
    {
        printf("Sorry, sorry!\n");
    }
    else
    {
        printf("Good luck!\n");
    }


    return 0;
}
