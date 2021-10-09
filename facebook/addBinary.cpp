#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n = a.size();
        int m = b.size();

        if (n < m)
            return addBinary(b, a);

        string sb;
        int carry = 0, j = m - 1;
        for (int i = n - 1; i > -1; i--)
        {
            if (a[i] == '1')
                carry++;
            if (j >= 0 && b[j--] == '1')
                carry++;

            if (carry % 2 == 1)
                sb.push_back('1');
            else
                sb.push_back('0');

            carry /= 2;
        }
        if (carry == 1)
            sb.push_back('1');

        reverse(sb.begin(), sb.end());

        return sb;
    }
};