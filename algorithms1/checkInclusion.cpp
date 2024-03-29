#include <bits/stdc++.h>
using namespace std;

bool matches(int s1map[26], int s2map[26])
{
    for (int i = 0; i < 26; i++)
        if (s1map[i] != s2map[i])
            return false;
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int s1map[26] = {0};
    int s2map[26] = {0};

    for (int i = 0; i < s1.size(); i++)
    {
        s1map[s1[i] - 'a']++;
        s2map[s2[i] - 'a']++;
    }

    for (int i = 0; i < s2.size() - s1.size(); i++)
    {
        if (matches(s1map, s2map))
            return true;
        s2map[s2[i + s1.size()] - 'a']++;
        s2map[s2[i] - 'a']--;
    }

    return matches(s1map, s2map);
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    cout << checkInclusion(s1, s2);
    return 0;
}