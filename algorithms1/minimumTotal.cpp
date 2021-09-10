#include <bits/stdc++.h>
using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    vector<int> mem = triangle[triangle.size() - 1];
    for (int i = triangle.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < triangle[i].size(); j++)
            mem[j] = triangle[i][j] + min(mem[j], mem[j + 1]);
    }
    return mem[0];
}

int main()
{
    vector<vector<int>> triangle = {{2},
                                    {3, 4},
                                    {6, 5, 7},
                                    {4, 1, 8, 3}};

    // vector<vector<int>> triangle = {{2},
    //                                 {3, 4}};

    cout << minimumTotal(triangle);
    return 0;
}