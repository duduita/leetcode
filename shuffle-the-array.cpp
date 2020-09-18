#include <iostream>
#include <vector>

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> aux;
        int *p1, *p2;
        aux.resize(nums.size());
        p1 = &nums[0];
        p2 = &nums[n];
        int i = 0;
            for(int j = 0; j < n; j++){
                aux[i] =  *p1;
                aux[i+1] = *p2;
                p1 = &nums[j+1];
                p2 = &nums[j+n+1];
                i=i+2;
            }
        return aux;
    }
};

