/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root == p) return p;
        if (root == q) return q;
        TreeNode *n1 = lowestCommonAncestor(root->left, p, q);
        TreeNode *n2 = lowestCommonAncestor(root->right, p, q);
        if (n1 && n2) return root;
        if (n1) return n1;
        if (n2) return n2;
        return NULL;
    }
};
