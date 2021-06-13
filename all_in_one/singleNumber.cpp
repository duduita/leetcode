#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    int a = 0;
    for (int i : nums)
        a ^= i;
    return a;
}

int main() {
    vector<int> nums = {1, 1, 2, 3};
    cout << singleNumber(nums);
    return 0;
}