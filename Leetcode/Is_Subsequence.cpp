#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int sSize = s.size();
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 0; j < t.size(); j++)
            {
                if (s[i] == t[i])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
        if (count == 3)
            return true;
        else
            return false;
    }
};

int main()
{
    Solution sol;
    string s, t;

    cout << "Enter the string s (subsequence): ";
    cin >> s;

    cout << "Enter the string t (original string): ";
    cin >> t;

    if (sol.isSubsequence(s, t))
    {
        cout << "\"" << s << "\" is a subsequence of \"" << t << "\"" << endl;
    }
    else
    {
        cout << "\"" << s << "\" is NOT a subsequence of \"" << t << "\"" << endl;
    }

    return 0;
}
