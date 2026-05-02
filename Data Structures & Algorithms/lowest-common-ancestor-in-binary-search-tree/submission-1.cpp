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
    TreeNode * func(TreeNode *root,TreeNode* p, TreeNode* q)
    {
        if(root==NULL) return NULL;
        if(root==p || root==q)
        {
            return root;
        }
        TreeNode *right=func(root->right,p,q);
        TreeNode *left=func(root->left,p,q);
        if(right==NULL)return left; // return p or q;
        else if(left==NULL)return right; // return p or q;
        else return root;  // return the parent of p or q, i.e when both the parent from which both the children are found
        
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return func(root,p,q);
        
    }
};