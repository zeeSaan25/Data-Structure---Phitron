class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return true;
        if(root->left != NULL && root->left->val != root->val) return false;
        if(root->right != NULL && root->right->val != root->val) return false;
        bool l = isUnivalTree(root->left);
        bool r = isUnivalTree(root->right);
        if(l==false || r==false) return false;
        else return true;
    }
};