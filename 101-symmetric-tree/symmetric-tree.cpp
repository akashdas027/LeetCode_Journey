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
    
    bool isMirror(TreeNode* left, TreeNode* right) {
        
        // If both are NULL
        if (left == nullptr && right == nullptr)
            return true;

        // If one is NULL
        if (left == nullptr || right == nullptr)
            return false;

        // Values must be equal
        if (left->val != right->val)
            return false;

        // Check mirror condition
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        return isMirror(root->left, root->right);
    }
};