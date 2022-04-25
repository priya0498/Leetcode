class Solution {
public:
      int maxx = INT_MIN ;
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        maxx = max(maxx,lh+rh);
        
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        height(root);
        return maxx;
    }
};