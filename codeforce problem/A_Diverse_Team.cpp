#include <bits/stdc++.h>
using namespace std;

int x;
set<int> st;
vector<int> arrAnswer;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!st.count(x))
        {
            arrAnswer.push_back(i);
            st.insert(x);
        }
    }
    if (arrAnswer.size() < k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << arrAnswer[i] + 1 << " ";
        }
    }
    return 0;
}