class Solution {
public:
    bool checkTree(TreeNode* root) {
        int l = root->left->val;
        int r = root->right->val;
        if(l+r == root->val) return true;
        else return false;
    }
};