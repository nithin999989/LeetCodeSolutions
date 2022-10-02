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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(!root) return {};
        
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            vector<int> tmp;
            
            while(s--)
            {
                TreeNode* t = q.front();
                q.pop();
                tmp.push_back(t->val);
                
                if(t->left)  q.push(t->left);
                if(t->right)  q.push(t->right);
            }
            
            ans.push_back(tmp);
            
        }
        return ans;
    }
};