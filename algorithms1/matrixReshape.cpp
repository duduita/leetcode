#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> res;
    int count = 0;
    vector<int> aux;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            aux.push_back(mat[i][j]);
            count++;
            if (count == c)
            {
                res.push_back(aux);
                aux.clear();
                count = 0;
                continue;
            }
        }
    }
    if (res.size() != r)
        return mat;
    return res;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}};
    matrixReshape(mat, 4, 1);
    return 0;
}