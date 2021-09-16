#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int start = 0;
    int maxProfit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] - prices[start] < 0)
            start = i;
        maxProfit = max(maxProfit, prices[i] - prices[start]);
    }
    return maxProfit;
}

int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(nums) << "\n";
    return 0;
}