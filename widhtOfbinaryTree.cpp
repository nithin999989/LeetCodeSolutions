class Solution {
public:
    //left child present at 2*index,and right child present at 2*i+1;
#include<bits/stdc++.h>
    int widthOfBinaryTree(TreeNode* root) {
        //map<TreeNode*,long long int>m;
        long long int index=1;
       // indexing(root,index,m);
        queue<pair<TreeNode*,long long int>>q;
       // cout<<m[root]<<endl;
        q.push({root,0});
        long long int ans=-1;
        while(!q.empty()){
            
            int n=q.size();
            if(ans<q.back().second-q.front().second+1){
                ans=q.back().second-q.front().second+1;
            }
            long long int  a=0;
            long long int  b=0;
            int mini=q.front().second;
            for(int i=0;i<n;i++){
                
                auto x=q.front();
                q.pop();
               
                if(x.first->left!=NULL){
                    q.push({x.first->left,2*(x.second-mini)+1});
                }
                if(x.first->right!=NULL){
                    q.push({x.first->right,2*(x.second-mini)+2});
                }
            }
            
        }
        return ans;
    }
};
