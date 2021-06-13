#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> result;
  unordered_map<int, int> m;
  for (auto i = 0; i < nums.size(); i++) {
    if (m.find(target - nums[i]) == end(m)) {
      m[nums[i]] = i;
    } else {
      result.push_back(m[target - nums[i]]);
      result.push_back(i);
      break;
    }
  }
  return result;
}

int main() {
  vector<int> nums = {0, 9, 0, 9};
  for (auto i : twoSum(nums, 9))
    cout << i;
  return 0;
}