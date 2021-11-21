// Dado uma matriz 2D de tamanho m x n que representa um mapa de 1s (terra) e
// 0s (água), retorne o número de ilhas.

// Uma ilha é cercada por agua e formada por terras conectadas horizontalmente ou
// verticalmente.

// Você pode assumir que todas as 4 bordas do mapa estão cercadas por água.

// Example 1:
// Input: grid = [
//   [1, 1, 1, 1, 0],
//   [1, 1, 0, 1, 0],
//   [1, 1, 0, 0, 0],
//   [0, 0, 0, 0, 0]
// ]
// Output: 1

// Example 2:
// Input: grid = [
//   [1, 1, 0, 0, 0],
//   [1, 1, 0, 0, 0],
//   [0, 0, 1, 0, 0],
//   [0, 0, 0, 1, 1]
// ]
// Output: 3

#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &grid, int row, int col)
{
    if (row == grid.size() || col == grid[row].size() || grid[row][col] != 1)
        return;

    grid[row][col] = 0;
    dfs(grid, row, col + 1);
    dfs(grid, row + 1, col);
}

int countIslands(vector<vector<int>> &grid)
{
    int count = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                dfs(grid, i, j);
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> grid = {
        {1, 1, 1, 1, 0},
        {1, 1, 0, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 0, 0, 0, 0}};
    cout << countIslands(grid) << endl;
}
