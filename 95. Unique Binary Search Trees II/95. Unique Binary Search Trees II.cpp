class Solution
{
public:
    map<pair<int, int>, vector<TreeNode *>> mp;
    vector<TreeNode *> f(int n, int s)
    {
        vector<TreeNode *> ans;
        if (mp.count({n, s}))
            return mp[{n, s}];
        if (n < s)
            return {0};
        for (int i = s; i <= n; i++)
        {
            for (auto left : f(i - 1, s))
            {
                for (auto right : f(n, i + 1))
                {
                    TreeNode *curr_tree = new TreeNode(i);
                    curr_tree->left = left;
                    curr_tree->right = right;
                    ans.push_back(curr_tree);
                }
            }
        }
        return mp[{n, s}] = ans;
    }
    vector<TreeNode *> generateTrees(int n)
    {
        return f(n, 1);
    }
};