#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid, int x, int y, int &maxArea, int &count)
{
    if (x < 0 || y < 0 || x == grid.size() || y == grid[x].size() || grid[x][y] == 0 || grid[x][y] == 2)
        return;
    else if (grid[x][y])
    {
        count++;
        grid[x][y] = 2;
    }

    dfs(grid, x - 1, y, maxArea, count);
    dfs(grid, x, y + 1, maxArea, count);
    dfs(grid, x, y - 1, maxArea, count);
    dfs(grid, x + 1, y, maxArea, count);

    return;
}

int maxAreaOfIsland(vector<vector<int>> &grid)
{
    int maxArea = 0, count = 0, x = 0, y = 0;
    while (1)
    {
        while (y < grid[x].size() && (!grid[x][y] || grid[x][y] == 2))
            y++;
        if (y == grid[x].size())
        {
            x++;
            y = 0;
        }
        if (x == grid.size())
            break;

        if (grid[x][y])
            dfs(grid, x, y, maxArea, count);

        if (count > maxArea)
            maxArea = count;
        count = 0;
    }
    return maxArea;
}

int main()
{
    vector<vector<int>> grid = {{0, 0, 0, 0, 0, 0, 0, 0}};
    // vector<vector<int>> grid = {{0}};
    // vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0}, {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
    cout << maxAreaOfIsland(grid) << "\n";
    for (auto i : grid)
    {
        cout << "\n";
        for (auto j : i)
            cout << j << " ";
    }

    return 0;
}