#include <bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t m = 0;
    for (int i = 0; i < 32; i++, n >>= 1)
    {
        m <<= 1; // anda com o m
        m |= n & 1; // pega o ultimo cara do n
    }
    return m;
}

int main()
{
    uint32_t m = "00000010100101000001111010011100";
    reverseBits(m);
    return 0;
}