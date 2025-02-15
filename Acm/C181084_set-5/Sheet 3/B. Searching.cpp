#include<bits/stdc++.h>
using namespace std;

void getIndex(vector<long long>arr, int ele)
{
    auto it = find(arr.begin(),
                   arr.end(), ele);


    if (it != arr.end())
    {
        int index = distance(arr.begin(),
                             it);
        cout << index << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    int n, ele, index = 0;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>ele;

    getIndex(arr,ele);

}
