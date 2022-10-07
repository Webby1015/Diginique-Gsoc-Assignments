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
    bool isValidBST(TreeNode* root) {
        return check(root, nullptr, nullptr);
    }
    bool check(TreeNode* root, TreeNode* left, TreeNode* right) { 
        if (!root) return true;
        if (left && left->val >= root->val || 
            right && right->val <= root-> val) return false;
        return check(root->left, left, root) && check(root->right, root, right);
    }
};
