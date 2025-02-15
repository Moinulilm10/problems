#include<

int main()
{
    int number, T ;
    cin>>T;
    for(int i=0 ; i<=T ; i++)
    {
        cin>>number;
        if((number%2)==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }

}
