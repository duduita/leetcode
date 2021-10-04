#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void backtrack(string &aux, vector<string> &res, int start, int count, map<string, int> &set, int k)
    {
        if (aux.size() == set.size())
        {
            res.push_back(aux);
            return;
        }

        set for (int i = start; i < set.size() - 1; i++)
        {
            aux.push_back(set[i]);
            backtrack(aux, res, i + 1, count + 1, set, k);
            aux.pop_back();
        }
    }

    vector<string> letterCombinations(string digits)
    {
        map<int, string> letters = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        map<int, string>::iterator itr;
        map<string, int> phone;
        map<string, int>::iterator phone_itr;

        for (int i = 0; i < digits.size(); i++)
        {
            // letters.find(digits[i])->second = abc
            itr = letters.find(digits[i]);
            phone_itr = phone.find(itr->second);
            if (phone_itr == phone.end())
                phone.insert({itr->second, 1});
            phone.insert({itr->second, phone_itr->second++});
        }

        string aux;
        vector<string> res;
        // backtrack(aux, res, 0, 0, phone, digits.size());
        return res;
    }
};

int main()
{
    Solution solution;
    string nums = "223";
    vector<string> res = solution.letterCombinations(nums);
    res = {};
}