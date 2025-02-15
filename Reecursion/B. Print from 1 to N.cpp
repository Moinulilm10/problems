#include<bits/stdc++.h>
using namespace std;

void print(int i)
{
    int n;
    if(i > n) return;
    printf("%d ", i);
    print(i+1);
}

int main()
{
    print(1);
}
