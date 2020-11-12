#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i], s[n - i - 1]);
    }
}
void reverseString2(string &s)
{
    return {s.rbegin(), s.rend()};
}
int main()
{
    string shape = {"hello"};
    reverseString2(shape);
    for (int i = 0; i < shape.size(); i++)
        cout << shape[i];

    return 0;
}