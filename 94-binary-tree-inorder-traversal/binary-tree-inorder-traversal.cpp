/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> result;

    void inorder(TreeNode* root) {
        if (root == nullptr)
            return;

        inorder(root->left);      // Visit left subtree
        result.push_back(root->val); // Visit root
        inorder(root->right);     // Visit right subtree
    }

    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return result;
    }
};