#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> res;
    map<int, int> map;
    for (int i = 0; i < nums.size(); i++)
    {
        if (map.find(target - nums[i]) != map.end())
        {
            res.push_back(map[target - nums[i]]);
            res.push_back(i);
            break;
        }
        else
            map[nums[i]] = i;
    }
    return res;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> res = twoSum(nums, 9);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}