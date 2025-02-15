#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// class Solution
// {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int> &nums)
//     {
//         int length = nums.size();
//         map<int, int> mp;
//         vector<int> numsSorted = nums;
//         sort(numsSorted.begin(), numsSorted.end());

//         for (int i = length - 1; i >= 0; i--)
//         {
//             mp[numsSorted[i]] = i;
//         }
//         for (int i = 0; i < length; i++)
//         {
//             nums[i] = mp[nums[i]];
//         }
//         return nums;
//     }
// };

class Solution
{
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums)
    {
        // support variables
        int len = nums.size();
        vector<int> res(len), copyV(nums);
        // reading copyV to be binary-searched
        sort(begin(copyV), end(copyV));
        for (int i = 0; i < len; i++)
        {
            // res[i] = lower_bound(begin(copyV), end(copyV), nums[i]) - begin(copyV);
            res[i] = lower_bound(copyV.begin(), copyV.end(), nums[i]) - copyV.begin();
        }
        return res;
    }
};

int main()
{
    vector<int> nums = {8, 1, 2, 2, 3};
    Solution sol;
    vector<int> result = sol.smallerNumbersThanCurrent(nums);

    // Output the result
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
