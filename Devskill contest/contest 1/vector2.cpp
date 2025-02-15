#include <bits/stdc++.h>
using namespace std;

#define ios ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n"
#define ll long long

int main()
{
    ios;

    int n, q, op, t, x;
    scanf("%d %d", &n, &q);
    vector<int> v[n];
    while (q--)
    {
        scanf("%d %d", &op, &t);
        if (op == 0)
        {
            scanf("%d", &x);
            v[t].push_back(x);
        }
        else if (op == 1)
        {
            if (!v[t].empty())
                printf("%d", v[t][0]);
            for (int i = 1; i < v[t].size(); i++)
                printf(" %d", v[t][i]);
            printf("\n");
        }
        else
        {
            v[t].clear();
        }
    }
    return 0;

}

