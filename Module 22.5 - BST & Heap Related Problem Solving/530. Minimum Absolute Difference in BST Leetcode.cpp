class Solution {
public:
    void inorder(TreeNode * root, vector<int> &v){
        if(root->left) inorder(root->left, v);
        v.push_back(root->val);
        if(root->right) inorder(root->right, v);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inorder(root, v);
        int mn = INT_MAX;
        for(int i=1; i<v.size(); i++){
            mn = min(mn, v[i]-v[i-1]);
        }
        return mn;
    }
};
