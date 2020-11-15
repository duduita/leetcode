#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    unordered_map<int, int> m;
    //Per problem description, there are unique elements.
    for (int i = 0; i < nums.size(); i++)
    {
        m[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        auto it = m.find(target - nums[i]);
        if ((it != end(m)) && (m[target - nums[i]] != i))
        {
            result.push_back(i);
            result.push_back(m[target - nums[i]]);
            break;
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {3, 2, 4, 6, 4, 7, 1, 2, 3, 4, 21};
    vector<int> ans;
    ans.resize(2);
    ans = twoSum(nums, 25);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans.at(i) << ' ';
}