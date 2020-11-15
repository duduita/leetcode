#include <iostream>
#include <vector>
#include <bits/stdc++.h> 
using namespace std;

    bool binarySearch(int l, int r, vector<int>& v, int x) {
        if(l>r)
            return false;
        int q = (l+r)/2;
        if(v[q] == x)
            return true;
        if(v[q] > x)
            return binarySearch(l, q-1, v, x);
        return binarySearch(q+1, r, v, x);
    }
    
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> st;
        for(int i : nums)
        {
            if(st.find(i) != st.end())
                return true;
            st.insert(i);
        }
        return false;
    }

    int main()
    {
        vector<int> nums = {1,2,3,1};
        cout << containsDuplicate(nums) << endl
             << endl;
    }