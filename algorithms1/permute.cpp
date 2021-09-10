#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int> &aux, vector<int> &nums, vector<vector<int>> &res, vector<bool> &used)
{
    if (aux.size() == nums.size())
    {
        res.push_back(aux);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (used[i])
            continue;
        aux.push_back(nums[i]);
        used[i] = true;
        backtrack(aux, nums, res, used);
        used[i] = false;
        aux.pop_back();
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> aux;
    vector<vector<int>> res;
    vector<bool> used(nums.size(), 0);
    backtrack(aux, nums, res, used);
    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    permute(nums);
    return 0;
}