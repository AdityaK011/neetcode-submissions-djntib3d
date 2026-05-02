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
    
    int find(TreeNode* root, TreeNode* p, stack<TreeNode*>& ancestors){
        if(root==nullptr){
            return 0;
        }
        if(root==p){ 
            ancestors.push(root);
            return 1;
        }
        int left=find(root->left,p,ancestors);
        int right=find(root->right,p,ancestors);
        if(left || right) {
            ancestors.push(root);
            return 1;
        }
        return 0;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack<TreeNode*> p_ancestors,q_ancestors;
        find(root,p, p_ancestors);
        find(root,q, q_ancestors);
        TreeNode* ans;
        while(p_ancestors.size()!=0 and q_ancestors.size()!=0){
            if(p_ancestors.top()==q_ancestors.top()){
                ans=p_ancestors.top();
                p_ancestors.pop(),q_ancestors.pop();
            }
            else{
                break;
            }
        }
        return ans;
    }
};
