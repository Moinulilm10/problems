#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int arr[12];

    cin>>k;

    for(int i=0; i<12; i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+12, greater<int>());

    int sum = 0;
    int cnt = 0;
    bool found = false;

    if(k==0)
    {
        cout<<0<<endl;
        found = true;

    }

    else
    {
        for(int i=0; i<12; i++)
        {
            sum += arr[i];
            cnt++;

            if(sum >= k)
            {
                cout<<cnt<<endl;
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout<<-1<<endl;
    }

    return 0;
}
