#include<bits/stdc++.h>
using namespace std;

double sum = 0.0, av;

double avg(double arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return av = sum/n;
}

int main()
{
    int n;
    cin>>n;
    double arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    printf("%.6lf\n",avg(arr,n));
}
