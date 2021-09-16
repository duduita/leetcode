#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxCount = nums[0];
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (sum < 0)
            sum = 0;
        sum += nums[i];
        maxCount = max(maxCount, sum);
    }
    return maxCount;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Oi";
    cout << maxSubArray(nums) << "\n";
    return 0;
}