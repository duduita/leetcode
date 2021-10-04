#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        // if nums[i] > 0, it won't match with the complement
        for (int i = 0; i < nums.size() && nums[i] <= 0; i++)
            // i == 0 to avoid errors in the edge case
            if (i == 0 || nums[i - 1] != nums[i])
            {
                unordered_set<int> seen;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    int complement = -nums[i] - nums[j];
                    if (seen.count(complement))
                    {
                        res.push_back({nums[i], complement, nums[j]});
                        // j + 1 < nums.size() to avoid errors in the edge case
                        while (j + 1 < nums.size() && nums[j] == nums[j + 1])
                        {
                            j++;
                        }
                    }
                    seen.insert(nums[j]);
                }
            }
        return res;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = solution.threeSum(nums);
}