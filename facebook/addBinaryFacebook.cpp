#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // function to convert decimal to binary
    string decToBinary(int n)
    {
        // array to store binary number
        int binaryNum[32];
        string res;
        // counter for binary array
        int i = 0;
        if (n == 0)
            return "0";
        while (n > 0)
        {

            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }

        // printing binary array in reverse order
        for (int j = i - 1; j >= 0; j--)
            if (binaryNum[j])
                res.push_back('1');
            else
                res.push_back('0');

        return res;
    }

    string addBinary(string a, string b)
    {
        char x = stoi(a, nullptr, 2);
        char y = stoi(b, nullptr, 2);
        char answer, carry;
        while ((int)y != 0)
        {
            answer = x ^ y;
            carry = (x & y) << 1;
            x = answer;
            y = carry;
        }
        return decToBinary((int)x);
    }
};

int main()
{
    Solution solution;
    string a = "11010010";
    string b = "11";
    cout << solution.addBinary(a, b);
}