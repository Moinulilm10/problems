#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, r, k;

    cin>>l>>r>>k;

    int cnt=0;

    for(int i=l; i<=r; i++){
        if(i%k==0){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
}
