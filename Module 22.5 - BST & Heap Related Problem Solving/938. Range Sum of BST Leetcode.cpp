class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode * parent = q.front();
            q.pop();

            if(parent->val <= high && parent->val >= low) sum+=parent->val;
            
            if(parent->left) q.push(parent->left);
            if(parent->right) q.push(parent->right);
        }
        return sum;
    }
};
