#include<iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    string arr[10]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for(int i=a; i<=b; i++)
    {
        if(i>9 && i%2 == 0)
        {
            cout<<"even"<<endl;
        }
        else if(i>9 && i%2 != 0)
        {
            cout<<"odd"<<endl;
        }
        else
        {
            cout<<arr[i-1]<<endl;
        }
    }


    return 0;
}
