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
    int ans=0;
    int distance(TreeNode* root){
        if(root==nullptr){
            return -1;
        }
        int left=0,right=0;
        left=1+distance(root->left);
        right=1+distance(root->right);
        ans=max(ans,left+right);
        return max(left,right);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        distance(root);
        return ans;
    }
};
