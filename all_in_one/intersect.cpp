#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i = 0, j = 0, n = nums1.size(), m = nums2.size();
    vector<int> res;
    while(i < n && j < m){
        if(nums1[i] == nums2[j]){
            res.push_back(nums1[i]);
            i++;
            j++;
        }
        else if(nums1[i] > nums2[j])
            j++;
        else
            i++;
    }
    return res;
}

int main() {
    vector<int> nums1 = {1, 1, 2, 3};
    vector<int> nums2 = {1, 1, 2, 3};
    cout << intersect(nums1, nums2)[0];
    return 0;
}