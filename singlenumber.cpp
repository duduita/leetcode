class Solution {
public:
int singleNumber(vector<int> &nums)
{
    multiset <int, greater <int> > backup;
    multiset <int, greater <int> > :: iterator itr; 
    for (int i : nums)
    {
        if (backup.find(i) == backup.end())
            backup.insert(i);
        else
            backup.erase(i);
    }
    itr = backup.begin();
return *(itr);
}
};