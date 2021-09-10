#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<int> &aux, vector<vector<int>> &res, int start, int count, int n, int k)
{
    if (count == k)
    {
        res.push_back(aux);
        return;
    }

    for (int i = start; i < n; i++)
    {
        aux.push_back(i + 1);
        backtrack(aux, res, i + 1, count + 1, n, k);
        aux.pop_back();
    }
}

vector<vector<int>> combine(int n, int k)
{
    vector<int> aux;
    vector<vector<int>> res;
    backtrack(aux, res, 0, 0, n, k);

    for (auto i : res)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }

    return res;
}

int main()
{
    combine(4, 3);
    return 0;
}