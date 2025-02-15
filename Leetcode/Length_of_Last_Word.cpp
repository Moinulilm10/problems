#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = 0;
        int strLen = s.length();

        // Start from the end of the string and count the length of the last word
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s.at(i) != ' ')
            {
                len++;
                cout << s.at(i) << " ";
            }
            else if (len > 0)
            {
                break;
            }
        }
        return len;
    }
};

int main()
{
    Solution sol;
    string s = "   fly me   to   the moon  ";

    cout << "Length of last word: " << sol.lengthOfLastWord(s) << endl;

    return 0;
}
