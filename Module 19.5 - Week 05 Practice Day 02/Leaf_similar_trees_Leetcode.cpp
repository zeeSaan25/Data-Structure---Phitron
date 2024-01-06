class Solution {
public:
    void findLeaves(TreeNode * root, vector<int> &v){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL){
            v.push_back(root->val);
        }
        findLeaves(root->left,v);
        findLeaves(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        bool flag = true;
        vector<int> a,b;
        findLeaves(root1, a);
        findLeaves(root2, b);
        if(a.size() != b.size()) return false;
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]){
                flag = false;
            }
        }
        return flag;
    }
};
