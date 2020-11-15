#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int reverse(int x)
{
    long long res = 0;
    while (x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    return (res < INT_MIN || res > INT_MAX) ? 0 : res;
}
int main()
{
    int x = 123;
    int y = reverse(x);
    cout
        << y;

    return 0;
}