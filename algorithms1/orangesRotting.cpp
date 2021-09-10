#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int x, int y, int count)
{
    if (x < 0 || y < 0 || x >= image.size() || y >= image[x].size() || image[x][y] == 0 || (image[x][y] > 1 && image[x][y] < count))
        return;
    image[x][y] = count;

    dfs(image, x - 1, y, count + 1);
    dfs(image, x, y + 1, count + 1);
    dfs(image, x, y - 1, count + 1);
    dfs(image, x + 1, y, count + 1);
    return;
}

int orangesRotting(vector<vector<int>> &grid)
{
    if (grid.size() == 0)
        return -1;

    for (int i = 0; i < grid.size(); i++)
        for (int j = 0; j < grid[0].size(); j++)
            if (grid[i][j] == 2)
                dfs(grid, i, j, 2);

    int minutes = 2;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
                return -1;
            minutes = max(minutes, grid[i][j]);
        }
    }

    for (auto i : grid)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }

    return minutes - 2;
}

int main()
{
    vector<vector<int>> grid = {{2, 1, 1}, {0, 1, 1}, {1, 0, 1}};
    for (auto i : grid)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    cout << orangesRotting(grid);
    return 0;
}