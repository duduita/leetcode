#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    map<int, string> letters = {
        {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

public:
    void backtrack(int index, string &digits, string &aux, vector<string> &res)
    {
        if (aux.size() == digits.size())
        {
            res.push_back(aux);
            return;
        }

        string possible_letters = letters.find(digits[index])->second;
        for(int i = 0; i < possible_letters.size(); i++){
            aux.push_back(possible_letters[i]);
            backtrack(index + 1, digits, aux, res);
            aux.pop_back();
        }
    }
    vector<string> letterCombinations(string digits)
    {
        vector<string> res;
        string aux;
        if (!digits.size())
            return res;

        backtrack(0, digits, aux, res);
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