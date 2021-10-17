int leftMostColumnWithOne(BinaryMatrix &binaryMatrix)
{
    int rowSize = binaryMatrix.dimensions()[0];
    int colSize = binaryMatrix.dimensions()[1];
    int minCol = colSize;
    int mid;
    for (int i = 0; i < rowSize; i++)
    {                               // i = 0
        int l = 0, r = colSize - 1; // l = 0  r = 3
        while (l < r)
        {                                  // 3 <= 3
            mid = l + (r - l) / 2;         // 3 + (3 - 3) / 2 = 3
            if (!binaryMatrix.get(i, mid)) // m[0][3] = 1
                l = mid + 1;
            else
                r = mid; // 3
        }
        if (l == colSize)
            l--;
        if (binaryMatrix.get(i, l))
            minCol = min(minCol, l); // minCol = min(INT_MAX, 1) = 1
        else if (binaryMatrix.get(i, l + 1))
            minCol = min(minCol, l);
    }
    if (minCol == colSize)
        return -1;
    return minCol;