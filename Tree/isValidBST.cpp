/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  bool recursive(TreeNode *root, TreeNode *low, TreeNode *high) {
    if (root == NULL)
      return true;

    if (low != NULL and root->val <= low->val or
        high != NULL and root->val >= high->val)
      return false;

    return recursive(root->left, low, root) &&
           recursive(root->right, root, high);
  }

  bool isValidBST(TreeNode *root) { return recursive(root, NULL, NULL); }
};