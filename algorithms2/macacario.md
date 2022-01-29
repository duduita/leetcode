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