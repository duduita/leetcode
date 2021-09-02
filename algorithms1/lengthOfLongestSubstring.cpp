#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int ascii[256] = {-1};
    int maxLength = 0, start = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (ascii[s[i]] > start)
            start = ascii[s[i]];
        ascii[s[i]] = i;
        maxLength = max(maxLength, i - start);
    }

    return maxLength;
}

int main()
{
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s);
    return 0;
}