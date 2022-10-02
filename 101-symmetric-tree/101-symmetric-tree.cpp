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
    
    bool helper(TreeNode*p,TreeNode*q)
    {
        if(!p or !q) return p==q;
        
        if(p->val != q->val) return false;
        return helper(p->left,q->right) && helper(p->right,q->left);
    }
    
    bool isSymmetric(TreeNode* root)
    {
        if(!root) return false;
        return helper(root->left,root->right);
        
    }
};