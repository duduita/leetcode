class Solution
{
public:
    //Brute Force Method
    /*    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto i = 0; i < nums.size()-1; i++) {
            for(auto j = i+1; j< nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
*/
    //Two pass hash table
    /*    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> m;
        //Per problem description, there are unique elements.
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++) {
            auto it = m.find(target - nums[i]);
            if( (it != end(m)) && ( m[target - nums[i]] != i)) {
                result.push_back(i);
                result.push_back(m[target - nums[i]]);
                break;
            }
        }
        return result;
    }
*/
    //One pass hash table
    /*    
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> m;
        for(auto i = 0; i < nums.size(); i++) {
            if(m.find(target-nums[i]) == end(m)) {
                m[nums[i]] = i;
            } else {
                result.push_back(m[target - nums[i]]);
                result.push_back(i);
                break;
            }
        }
        return result;
    }
*/

    /*    
    vector<int> twoSum(vector<int>& v, int t) {
        vector<int> r;
        unordered_map<int,int> m;
        m.reserve(v.size());
        for(auto it = begin(v); it != end(v); it++) {
            if(m.find(t - *it) != end(m)) {
                r.push_back(m[t - *it]);
                r.push_back(it-begin(v));
                break;
            }
            m.emplace(*it, it-begin(v));
        }
        return r;
    }
*/
    //one more solution
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
            if (m.find(target - nums[i]) != m.end())
                return vector<int>{m[target - nums[i]], i};
            else
                m[nums[i]] = i;
        return vector<int>{-1, -1};
    }
};