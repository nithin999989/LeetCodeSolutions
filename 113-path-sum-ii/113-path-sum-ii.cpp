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
    void dfs(TreeNode* root, int k,vector<vector<int>> &res,vector<int> path ){
        path.push_back(root->val);
//         leaf
        if(!root->left and !root->right){
            int sum=0;
            for(auto it:path) sum+=it;
            if(sum==k){
                res.push_back(path);
            }
        }
//         left
        if(root->left) dfs(root->left,k,res,path);
//         right
        if(root->right) dfs(root->right,k,res,path);
//         backtrack
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int k) {
        vector<vector<int>> res;
        if(!root) return res;
        dfs(root,k,res,{});
        return res;
    }
};