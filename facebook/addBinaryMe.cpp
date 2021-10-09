class Solution
{
public:
    string addBinary(string a, string b)
    {
        int n = a.size();
        int m = b.size();
        if (m > n)
            return addBinary(b, a);

        int carry = 0;
        string res;

        for (int i = 0; i < n; i++)
        {
            if (a[n - 1 - i] == '1')
                carry++;
            if (i < m && b[m - 1 - i] == '1')
                carry++;

            if (carry % 2)
                res.push_back('1');
            else
                res.push_back('0');
            carry /= 2;
        }

        if (carry == 1)
            res.push_back('1');
        reverse(res.begin(), res.end());
        return res;
    }
};
