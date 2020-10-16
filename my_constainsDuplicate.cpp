#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int l, int r, vector<int> &v, int x)
{
    if (l > r)
        return false;
    int q = (l + r) / 2;
    if (v[q] == x)
        return true;
    if (v[q] > x)
        return binarySearch(l, q - 1, v, x);
    return binarySearch(q + 1, r, v, x);
}

bool containsDuplicate(vector<int> &nums)
{
    int i = 0, found = 0;
    sort(nums.begin(), nums.end());
    while (i < nums.size() && found == 0)
    {
        if (binarySearch(i + 1, nums.size() - 1, nums, nums[i]))
            found++;
        i++;
    }
    return found;
}

int singleNumber(vector<int> &nums)
{
    for (int i : nums)
    {
        if (count(nums.begin(), nums.end(), i) == 1)
            return i;
    }
}

int main()
{
    vector<int> nums = {2, 2, 1};
    cout << singleNumber(nums) << endl
         << endl;
}