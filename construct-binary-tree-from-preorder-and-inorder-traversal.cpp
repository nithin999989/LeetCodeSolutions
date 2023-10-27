class Solution {
public:
int findpos(vector<int>& arr,int size,int element){

    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;

}

TreeNode* build(vector<int>& preorder, vector<int>& inorder, int size, int &preindex, int inorderstart, int inorderend){

    if(preindex >= size || inorderstart > inorderend){
        return NULL;
    }
    int element = preorder[preindex++];
    TreeNode* root = new TreeNode(element);
    int pos = findpos(inorder,size,element);

    root->left = build(preorder, inorder, size, preindex, inorderstart, pos-1);
    root->right = build(preorder, inorder, size, preindex, pos+1, inorderend);


    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int size = preorder.size();
        int preindex = 0;
        int inorderstart = 0;
        int inorderend = size-1;

       return build(preorder, inorder, size, preindex, inorderstart, inorderend);
        
    }
};
