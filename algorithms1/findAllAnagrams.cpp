

#include <bits/stdc++.h>
using namespace std;

bool matches(int pmap[], int smap[])
{
    for (int i = 0; i < 26; i++)
        if (pmap[i] != smap[i])
            return false;
    return true;
}
vector<int> findAnagrams(string s, string p)
{
    vector<int> res;
    if (p.size() > s.size())
        return res;
    int pmap[26] = {0};
    int smap[26] = {0};

    for (int i = 0; i < p.size(); i++)
    {
        pmap[p[i] - 'a']++;
        smap[s[i] - 'a']++;
    }

    for (int i = 0; i <= s.size() - p.size(); i++)
    {
        if (matches(pmap, smap))
            res.push_back(i);

        if (i == s.size() - p.size())
            break;

        smap[s[i + p.size()] - 'a']++;
        smap[s[i] - 'a']--;
    }

    return res;
}

int main()
{
    string s1 = "cbaebabacd", s2 = "abc";
    for (auto i : findAnagrams(s1, s2))
        cout << i << " ";
    return 0;
}