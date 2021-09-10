#include <bits/stdc++.h>
using namespace std;

int rob(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    else if (nums.size() == 2)
        return max(nums[0], nums[1]);

    vector<int> mem(nums.size(), -1);

    mem[0] = nums[0];
    mem[1] = max(nums[0], nums[1]);

    for (int i = 2; i < nums.size(); i++)
        mem[i] = max(nums[i] + mem[i - 2], mem[i - 1]);

    return mem[nums.size() - 1];
}

int main()
{
    vector<int> nums = {0, 1, 9, 3, 1};
    return rob(nums);
}