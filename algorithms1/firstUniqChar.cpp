#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    int ascii[26];

    for (int i = 0; i < 26; i++)
        ascii[i] = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (ascii[s[i] - 'a'] == -1)
            ascii[s[i] - 'a'] = i;
        else
            ascii[s[i] - 'a'] -= i + 1;
    }

    for (int i = 0; i < s.size(); i++)
        if (ascii[s[i] - 'a'] > -1)
            return i;

    return -1;
}

int main()
{
    cout << firstUniqChar("loveleetcode");
    return 0;
}