#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],ma=INT_MIN,mi=INT_MAX;
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
        ma=max(arr[i],ma);
        mi=min(arr[i],mi);
    }
    printf("%d\n",ma-mi);
}
