#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int aux, j;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] == 0)
        {
            if (i + 1 != nums.size())
            {
                j = i;
                while (nums[j + 1] != 0 && j + 1 != nums.size())
                {
                    aux = nums[j + 1];
                    nums[j + 1] = nums[j];
                    nums[j] = aux;
                    j++;
                }
            }
        }
    }
    return;
}

int main()
{
    vector<int> nums = {0, 1, 2, 0, 3, 0, 1, 0};
    moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++)
        std::cout << nums.at(i) << ' ';
}