class TrieNode
{
public:
    bool is_leaf;
    TrieNode *children[26];
    TrieNode()
    {
        is_leaf = false;
        for (int i = 0; i < 26; i++)
            children[i] = 0;
    }
};

class WordDictionary
{
public:
    /** Initialize your data structure here. */
    WordDictionary()
    {
        root = new TrieNode();
    }

    /** Adds a word into the data structure. */
    void addWord(string word)
    {
        TrieNode *node = root;
        for (char c : word)
        {
            if (!node->children[c - 'a'])
                node->children[c - 'a'] = new TrieNode();
            node = node->children[c - 'a'];
        }
        node->is_leaf = true;
    }

    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word)
    {
        return search(word, root, 0);
    }

private:
    TrieNode *root;

    bool search(string word, TrieNode *node, int pos)
    {
        if (pos == word.size())
            return node->is_leaf;

        if (word[pos] != '.')
        {
            node = node->children[word[pos] - 'a'];
            return node && search(word, node, pos + 1);
        }

        for (int i = 0; i < 26; i++)
            if (node->children[i] && search(word, node->children[i], pos + 1))
                return true;
        return false;
    }
};