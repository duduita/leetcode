#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size() && nums[i] >= 0; i++)
        {
            if (i == 0 || nums[i - 1] != nums[i])
            {
                unordered_set<int> st;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    int complement = nums[i] + nums[j];
                    if (st.count(complement))
                    {
                        res.push_back({nums[i], complement, nums[j]});
                        while (j < nums.size() - 1 && nums[j] == nums[j + 1])
                            j++;
                    }
                    st.insert(complement);
                }
            }
        }
        return res;
    }
};