#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &image, int sr, int sc, int newColor, int oldColor)
{
    if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[sr].size() || image[sr][sc] == newColor || image[sr][sc] != oldColor)
        return;
    image[sr][sc] = newColor;

    dfs(image, sr - 1, sc, newColor, oldColor);
    dfs(image, sr, sc + 1, newColor, oldColor);
    dfs(image, sr, sc - 1, newColor, oldColor);
    dfs(image, sr + 1, sc, newColor, oldColor);

    return;
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
{
    dfs(image, sr, sc, newColor, image[sr][sc]);
    return image;
}

int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1;
    int sc = 1;
    floodFill(image, sr, sc, 2);
    for (auto i : image)
    {
        cout << "\n";
        for (auto j : i)
            cout << j << " ";
    }

    return 0;
}