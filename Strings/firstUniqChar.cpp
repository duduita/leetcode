#include <iostream>
#include <map>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

auto firstUniqChar(string &s)
{
    unordered_map<char, int> charQuant;
    int n = s.size();
    for (int i = n; i >= 0; i--)
    {
        if (charQuant.find(s[i]) != charQuant.end())
            charQuant.find(s[i])->second = 1 + charQuant.find(s[i])->second;
        charQuant.insert(pair<char, int>(s[i], 1));
    }

    // printing map gquiz1
    //unordered_map<char, int>::iterator itr;
    for (auto itr = charQuant.begin(); itr != charQuant.end(); ++itr)
    {
        if (itr->second == 1)
            return itr->first;
    }
}
int main()
{
    string shape = {"leetcode"};
    cout << firstUniqChar(shape);

    return 0;
}