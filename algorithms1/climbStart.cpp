#include <bits/stdc++.h>
using namespace std;

int fat(vector<int> &mem, int n)
{
    if (n == 1 or n == 0)
        return 1;
    else if (mem[n] != -1)
        return mem[n];
    mem[n] = fat(mem, n - 1) + fat(mem, n - 2);
    return mem[n];
}

int climbStairs(int n)
{
    vector<int> mem(n + 1, -1);
    return fat(mem, n);
}

int main(){
    return climbStairs(5);
}