#include <bits/stdc++.h>
using namespace std;

//#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long


set<int>st;
int main()
{
   // ios;




    int t;
    scanf("%d",&t);

    int a,x;

    for(int i = 0; i < t; i++)
    {

        scanf("%d %d",&a,&x);

        if(a == 0)
        {

            st.insert(x);
            printf("%d\n",st.size());

        }
        else
        {
            printf("%d\n",st.count(x));
        }
    }

    return 0;

}
