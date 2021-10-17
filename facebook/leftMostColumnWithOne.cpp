int leftMostColumnWithOne(BinaryMatrix &binaryMatrix)
{
    int m, n, i, l, r, row, col, minCol = INT_MAX;
    vector<int> dim(2, 0);
    dim = binaryMatrix.dimensions();
    m = dim[0];
    n = dim[1];
    row = m - 1;
    col = n - 1;
    l = 0, r = m - 1;

    for (i = 0; i < m; i++) // scan each row
    {
        if (binaryMatrix.get(i, col) == 0) //if in each row, last col is 0, continue to next row
            continue;
        l = 0;
        r = n - 1;
        while (l < r) //otherwise, perform binary search column wise for that row.
        {
            int mid = l + (r - l) / 2;
            if (binaryMatrix.get(i, mid) == 1)
                r = mid;
            else
                l = mid + 1;
        }
        minCol = min(minCol, l); // store min column
    }
    return minCol == INT_MAX ? -1 : minCol;
}