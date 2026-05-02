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
    bool ans=false;
    bool traverse(TreeNode*p, TreeNode*q){
        if(p==nullptr and q==nullptr){
            return true;
        }
        else if(p==nullptr or q==nullptr) return false;
        bool left=traverse(p->left,q->left);
        bool right=traverse(p->right,q->right);
        if(q->val==p->val and left and right) return true;
        return false;
    }
    void dfs(TreeNode *p, TreeNode *q){
        if(p==nullptr) return;
        if(p->val == q->val) ans|=traverse(p,q);
        dfs(p->left,q);
        dfs(p->right,q);
        return;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        dfs(root,subRoot);
        return ans;
    }
};
