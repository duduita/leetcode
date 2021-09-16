#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = n - 1;
    int i = m - 1;
    int k = m + n - 1;
    while (i >= 0 and j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }

    while (j >= 0)
        nums1[k--] = nums2[j--];

    return;
}

int main()
{
    vector<int> nums1 = {4, 0, 0, 0, 0, 0};
    vector<int> nums2 = {1, 2, 3, 5, 6};
    merge(nums1, 1, nums2, 5);
    for (auto i : nums1)
        cout << i << " ";
    return 0;
}