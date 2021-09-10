#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int column = matrix[0].size();
    vector<vector<int>> dist(row, vector<int>(column, INT_MAX));

    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
        {
            if (!matrix[i][j])
                dist[i][j] = 0;
            else
            {
                if (i > 0)
                    dist[i][j] = min(dist[i][j], dist[i - 1][j] + 1);
                if (j > 0)
                    dist[i][j] = min(dist[i][j], dist[i][j - 1] + 1);
            }
        }

    for (int i = row - 1; i >= 0; i--)
        for (int j = column - 1; j >= 0; j--)
        {
            if (i < row - 1)
                dist[i][j] = min(dist[i][j], dist[i + 1][j] + 1);
            if (j < column - 1)
                dist[i][j] = min(dist[i][j], dist[i][j + 1] + 1);
        }
    return dist;
}

int main()
{
    vector<vector<int>> mat = {{1, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    updateMatrix(mat);
    return 0;
}