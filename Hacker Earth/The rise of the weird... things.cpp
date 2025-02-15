#include<bits/stdc++.h>
using namespace std;

void Insertsort(int *a, int n)
{
   int cost = 0;
   for(int i=0; i<n; i++)
   {
       int key = a[i];
       int j = i-1;
       while(j>=0 && a[j]>key)
       {
           cost++;
           a[j+1]=a[j--];
       }
       a[j+1]=key;
   }
}

int main()
{
    int n,a[1000],b[1000],c[1000],sum=0,k=0,l=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Insertsort(a, n);
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }
    for(int i=0; i<k; i++)
    {
        printf("%d ",b[i]);
        sum=sum+b[i];
    }
    printf("%d ",sum);

    sum=0;
    for(int i=0; i<l; i++)
    {
        printf("%d ",c[i]);
        sum=sum+c[i];
    }
    printf("%d", sum);

    return 0;
}
