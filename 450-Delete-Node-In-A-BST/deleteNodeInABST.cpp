class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root -> val == key) {
            if(root -> left == NULL && root -> right == NULL) {
                delete root;
                return NULL;
            }
            if(root -> left != NULL && root -> right == NULL) {
                TreeNode * temp = root -> left;
                delete root;
                return temp;
            }
            if(root -> left == NULL && root -> right != NULL) {
                TreeNode * temp = root -> right;
                delete root;
                return temp;
            }
            else {
                TreeNode * temp = root -> right;
                while(temp -> left != NULL) {
                    temp = temp -> left;
                }
                int mini = temp -> val;
                root -> val = mini;
                root -> right = deleteNode(root -> right, mini);
                return root;
            }
        }
        else if( root -> val > key) {
            root -> left = deleteNode(root -> left, key);
            return root;
        }
        else {
            root -> right = deleteNode(root -> right, key);
            return root;
        }
    }
};