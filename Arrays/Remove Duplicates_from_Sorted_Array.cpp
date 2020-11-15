class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int *p;
        int *q;
        int length = 0;
        p = &nums[0];
        q = &nums[0];
        while(p != &nums.end()){
            while(*q = *p && p != &nums.end()){
                p++;
            }
            q++;
            length++;
            *q = *p;
        }
    return length+1;
    }
};