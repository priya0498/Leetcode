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
    bool solve(TreeNode* root, int *height)
    {
        if(root == 0)
            return true;
        int lh = 0;
        int rh = 0;
        if(solve(root->left, &lh) == false)
            return false;
        if(solve(root->right, &rh) == false)
            return false;
        *height = max(lh,rh) + 1;
        if(abs(lh-rh) <=1)
            return true;
        return false;
    }
    
    bool isBalanced(TreeNode* root) {
        int height = 0;
        return solve(root,&height);
    }
};