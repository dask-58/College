class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        function<void(TreeNode*, vector<TreeNode*>&)> ino = [&](TreeNode* node, vector<TreeNode*>& nd) {
            if (node == nullptr) return;
            ino(node->left, nd);
            nd.push_back(node);
            ino(node->right, nd);
        };
        
        function<TreeNode*(const vector<TreeNode*>&, int, int)> help = [&](const vector<TreeNode*>& nd, int s, int e) -> TreeNode* {
            if (e < s) return nullptr;
            int m = s + (e - s) / 2;
            TreeNode* root = nd[m];
            root->left = help(nd, s, m - 1);
            root->right = help(nd, m + 1, e);
            return root;
        };
        
        if (root == nullptr) return nullptr;
        
        vector<TreeNode*> trav;
        ino(root, trav);
        return help(trav, 0, trav.size() - 1);
    }
};
