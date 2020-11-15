#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    vector<int> newNumber;
    newNumber.resize(n + 1, 0);
    newNumber[0] = 1;
    return newNumber;
}
int main()
{
    vector<int> digits = {1, 9, 9};
    plusOne(digits);
    for (int i = 0; i < digits.size(); i++)
        std::cout << digits.at(i) << ' ';
}