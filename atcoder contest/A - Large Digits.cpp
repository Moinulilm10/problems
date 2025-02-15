#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3], b[3], i, j, asum=0, bsum=0;
    for(i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(j=0; j<3; j++)
    {
        cin>>b[j];
    }
    for(i=0; i<3; i++)
    {
        asum+=i;
    }
    for(j=0; j<3; j++)
    {
        bsum+=j;
    }
    if(asum > bsum){
        cout<<asum<<endl;
    }
    else{
        cout<<bsum<<endl;
    }

    return 0;
}
