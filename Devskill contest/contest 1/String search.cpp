#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long


int main()
{
    ios;

    string str1;
    string str2;

    cin>>str1;
    cin>>str2;


    int M = str2.size();
    int N = str1.size();


    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (str1[i + j] != str2[j])
                break;

        if (j == M)
            cout << i << endl;
    }


    return 0;
}


