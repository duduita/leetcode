#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<pair<int, int>> vp;

    // Inserting element in pair vector
    // to keep track of previous indexes
    for (int i = 0; i < nums.size(); ++i)
    {
        vp.push_back(make_pair(nums[i], i));
    }

    sort(vp.begin(), vp.end());

    vector<int> ans;
    ans.resize(2);

    int j, i, test, test2, p = 0;

    for (i = 0; i < nums.size(); i++)
    {
        p++;
        for (j = p; j != i && j < nums.size(); j++)
        {
            test = vp[i].first + vp[j].first;
            test2 = vp[i].first + vp[nums.size() - 1].first;
            if (test == target)
            {
                ans[0] = vp[i].second;
                ans[1] = vp[j].second;
                return ans;
            }
            if (test2 < target)
                break;
            if (test > target)
                break;
        }
    }
    return ans;
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