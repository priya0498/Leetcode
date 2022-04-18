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
	vector<int>v;
public:
	void inorder(TreeNode* root)
	{
		if(root==NULL) return;
		inorder(root->left);
		v.push_back(root->val);
		inorder(root->right);
	}
	int kthSmallest(TreeNode* root, int k) {
		inorder(root);
		// v.resize(v.size());
		return v[k-1];
	}
};