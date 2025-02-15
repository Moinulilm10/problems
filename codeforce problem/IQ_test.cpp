#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n, p, q;
    int arr[n];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cnt++;
        }
    }
    if(cnt == 1){
        i=p;
        cout<<p<<"\n";
    }
    else
    {
        cout<<cnt<<"\n";
    }

}
