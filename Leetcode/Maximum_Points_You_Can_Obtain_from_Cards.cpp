#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int ans = 0;
        int n = cardPoints.size();

        // Calculate the sum of the first k elements
        for (int i = 0; i < k; i++)
        {
            ans += cardPoints[i];
        }

        int max_sum = ans;

        // Use a sliding window to calculate the maximum sum
        for (int i = k - 1; i >= 0; i--)
        {
            max_sum -= cardPoints[i];         // Remove the element from the left
            max_sum += cardPoints[n - k + i]; // Add the element from the right
            ans = max(max_sum, ans);
        }
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1}; // Example input
    int k = 3;                                      // Example value for k

    int result = solution.maxScore(cardPoints, k);
    cout << "Maximum score: " << result << endl;

    return 0;
}
