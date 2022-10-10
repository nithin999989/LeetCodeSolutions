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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        vector<vector<int>>ans;
        solve(root,ans);
        
        int s = ans.size();
        if(s==0) return sum;
        for(int i=0; i<ans[s-1].size(); i++){
            sum += ans[s-1][i];
        }
        return sum;
    }
    
    void solve(TreeNode* root, vector<vector<int>> &ans){
        if(root==NULL)return;
        queue<TreeNode*>q;
        q.push(root);
        
        while(q.size()!=0){
            int size=q.size();
            vector<int>level;

            for(int i=1; i<=size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
    }
};