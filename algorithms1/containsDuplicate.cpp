#include <bits/stdc++.h>
using namespace std;

// bool containsDuplicate(vector<int> &nums)
// {
//     set<int> set;
//     for (auto i : nums)
//         if (set.find(i) == set.end())
//             set.insert(i);
//         else
//             return false;
//     return true;
// }

bool containsDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
        if (nums[i] == nums[i + 1])
            return true;
    return false;
}

// bool containsDuplicate(vector<int> &nums)
// {
//     return nums.size() > set<int>(nums.begin(), nums.end()).size();
// }

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    containsDuplicate(nums);
}