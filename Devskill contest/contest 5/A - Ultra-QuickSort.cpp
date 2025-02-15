#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAX 100007
#define endl "\n"
#define ll long long

long long inv_count;
int arr[200000]

void do_merge(int *arr, int L, int M, int R)
{
    int s1 = M - L + 1;
    int s2 = R - M;

    int left_aux[s1], right_aux[s2];

    for(int i = 0; i < s1; i++)
    {
        left_aux[i] = arr[L + i];
    }
    for(int i = 0; i < s2; i++)
    {
        right_aux[i] = arr[M + 1 + i];
    }

    int i, j, k;
    i = j = 0;
    k = L;

    while(i < s1 && j < s2)
    {
        if(left_aux[i] <= right_aux[j])
        {
            arr[k] = left_aux[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right_aux[j];
            j++;
            k++;
            inv_count = (inv_count + (s1 - i));
        }
    }
    while(i < s1)
    {
        arr[k] = left_aux[i];
        i++;
        k++;
    }
    while(j < s2)
    {
        arr[k] = right_aux[j];
        j++;
        k++;
    }
}

void merge_sort(int *arr, int L, int R)
{
    if(L < R)
    {
        int M = (L + R) / 2;
        merge_sort(arr, L, M);
        merge_sort(arr, M + 1, R);
        do_merge(arr, L, M, R);
    }
}


int main()
{
    int number;
    while(1)
    {
        scanf("%d",&number);
        if(number==0)
        {
            return 0;
        }

        int i;
        int arr[number];
        for(int i=0; i<number; i++)
        {
            scanf("%d",arr[i]);
        }

        inv_count = merge_sort(arr,0,number-1);
        printf("%d\n", inv_count);
    }

    return 0;
}
