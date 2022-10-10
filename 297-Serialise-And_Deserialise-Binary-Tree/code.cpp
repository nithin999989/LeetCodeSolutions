class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == NULL) return "";
         string str = "";
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode * temp = q.front();
            q.pop();
            if(temp == NULL) str.append("#,");
            else str.append(to_string(temp -> val)+ ",");
            if(temp != NULL) {
                q.push(temp -> left);
                q.push(temp -> right);
            }
        }
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0) return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode * root = new TreeNode(stoi(str));
        queue <TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            TreeNode * temp = q.front();
            q.pop();

            getline(s,str,',');
            if(str == "#") temp -> left = NULL;
            else {
                TreeNode * temp2 = new TreeNode(stoi(str));
                temp -> left = temp2;
                q.push(temp2);
            }

            getline(s,str,',');
            if(str == "#") temp -> right = NULL;
            else {
                TreeNode * temp2 = new TreeNode(stoi(str));
                temp -> right = temp2;
                q.push(temp2);
            }
        }
        return root;
    }
};