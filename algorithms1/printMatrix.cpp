#include <bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>> mat)
{
    for (auto i : mat)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
}