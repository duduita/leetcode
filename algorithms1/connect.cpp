/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    void rec(Node *root, int paidetodos)
    {
        if (root == nullptr)
            return;

        if (paidetodos)
            root->next = NULL;

        if (root->left != nullptr)
        { // se ele não é o nó final
            root->left->next = root;
            root->right->next = root;
        }

        if (!paidetodos && root->next->right == root) // se ele é o filho da direita
            if (root->next->next != NULL)
                root->next = root->next->next->left;
            else
                root->next = NULL;
        else if (!paidetodos)
            root->next = root->next->right;

        rec(root->left, 0);
        rec(root->right, 0);
    }

    Node *connect(Node *root)
    {
        if (!root)
            return root;
        else
            root->next = root;

        rec(root, 1);
        return root;
    }
};
