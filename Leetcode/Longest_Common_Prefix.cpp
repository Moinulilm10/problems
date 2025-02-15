#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for sort()

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans;

        // Handle empty input
        if (strs.empty())
            return "";

        // Sort strings lexicographically
        sort(strs.begin(), strs.end());

        // Get first and last string after sorting
        string firstString = strs[0];
        string lastString = strs[strs.size() - 1];

        // Compare characters
        for (int i = 0; i < firstString.size(); i++)
        {
            if (firstString[i] == lastString[i])
            {
                ans += firstString[i];
            }
            else
            {
                break;
            }
        }

        return ans;
    }
};

// Main function to test the solution
int main()
{
    Solution sol;

    // Test cases
    vector<vector<string>> testCases = {
        {"flower", "flow", "flight"}, // should return "fl"
        // {"dog", "racecar", "car"},                      // should return ""
        // {"interspecies", "interstellar", "interstate"}, // should return "inters"
        // {"throne", "throne"},                           // should return "throne"
        {""} // should return ""
    };

    // Run test cases
    for (int i = 0; i < testCases.size(); i++)
    {
        string result = sol.longestCommonPrefix(testCases[i]);
        cout << "Test case " << i + 1 << ":\n";
        cout << "Input: ";
        for (string s : testCases[i])
        {
            cout << s << " ";
        }
        cout << "\nOutput: \"" << result << "\"\n\n";
    }

    return 0;
}