#include <bits/stdc++.h>
using namespace std;

void bin(long n)
{
    long i;
    cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
        if ((n & i) != 0)
        {
            cout << "1";
        }
        else
        {
            cout << "0";
        }
    }
}

unsigned int reverseBits(unsigned int n)
{
    unsigned int m = 0;
    for (int i = 0; i < 32; i++, n >>= 1)
    {
        m = m << 1;      // anda com o m
        m = m | (n & 1); // pega o ultimo cara do n
        bin(m);
        cout << "\n\n";
    }
    return m;
}

int main()
{
    reverseBits(1);
    return 0;
}