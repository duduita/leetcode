#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
    {
        if (nums[cur] != 0)
        {
            swap(nums[lastNonZeroFoundAt++], nums[cur]);
        }
    }
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 3, 0, 1, 0};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
        std::cout << nums.at(i) << ' ';
}