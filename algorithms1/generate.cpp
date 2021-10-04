#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    vector<int> aux;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0)
            {
                if (j == i)
                {
                    aux.push_back(1);
                    res.push_back(aux);
                    aux.clear();
                }
                else
                    aux.push_back(1);
            }
            else if (j == i)
            {
                aux.push_back(1);
                res.push_back(aux);
                aux.clear();
            }
            else
                aux.push_back(res[i - 1][j] + res[i - 1][j - 1]);
        }
    }
    return res;
}

// vector<vector<int>> v(numRows);
// for (int i = 0; i < numRows; i++)
// {
//     v[i].resize(i + 1);
//     v[i][0] = v[i][i] = 1;
//     for (int j = 1; j < i; j++)
//     {
//         v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
//     }
// }
// return v;

int main()
{
    generate(1);
    return 0;
}
