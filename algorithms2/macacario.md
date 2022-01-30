 void transpose(vector<vector<int>>& m){
        int n = m.size();
        for(int i = 0; i < n; i++)
            for(int j = i + 1; j < n; j++){
                int tmp = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = tmp;
            }
    }

 void reflect(vector<vector<int>>& m){
        int n = m.size();
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n / 2; j++){
                int tmp = m[i][j];
                m[i][j] = m[i][n - j - 1];
                m[i][n - j - 1] = tmp;
            }
    }

class TrieNode
{
public:
    bool is_leaf;
    TrieNode* children[26];
    TrieNode()
    {
        is_leaf = false;
        memset(children, 0, sizeof(children));
    }
};

We can break this problem down into several parts:
First let's mathematically define the max area for a container. For any indexes i,j, we know that Area(i,j) = (j-i) * Min(height[j]-height[i])

For now, let's assume that the start and end indexes are fixed.
We want to prove that if height[end]>height[start], there is no integer n, where start<n<end, such that Area(start, n) > Area (start, end).
(In colloquial terms, Assuming start is fixed. if he height at the end index is greater than the height at the start index, the area of the container formed between start and end is larger than any containers in between)

Proof by Contradiction:
Assume that start, end are integers such that height(start) < height(end).
Assume that n is an integer such that start<n<end
(Note that start, n, and end represent integers of the array!)

Assume that Area(start, n) > Area (start, end)
Therefore
(n-start)*Min(height(n),height(start)) > (end-start)*Min(height(end),height(start)) = (end-start)* height(start)

However we assumed that end>n, and Min(height(n),height(start))<=height(start), therefore this contradicts out assumption that Area(start, n) > Area (start, end)
So there is no such n.
QED