#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {

        double ab, ac, bc, r;
        scanf("%f %f %f %f", &ab, &ac, &bc, &r);

        double ad = (sqrt(r)/sqrt(r+1)) * ab;
        printf("Case %d: %f\n", i+1, ad);
    }




    return 0;
}

