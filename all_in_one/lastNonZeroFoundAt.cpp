#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums) {
  for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++)
    if (nums[cur] != 0)
      swap(nums[lastNonZeroFoundAt++], nums[cur]);
}

int main() {
  vector<int> nums = {0, 9, 0, 9};
  moveZeroes(nums);
  for (auto i : nums)
    cout << i;
  return 0;
}