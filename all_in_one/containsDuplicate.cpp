#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]==nums[i]){
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1, 1, 2, 3};
    cout << containsDuplicate(nums);
    return 0;
}