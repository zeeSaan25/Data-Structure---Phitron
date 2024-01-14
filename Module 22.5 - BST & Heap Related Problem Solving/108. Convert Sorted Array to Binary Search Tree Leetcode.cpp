class Solution {
public:
    TreeNode * convert(vector<int> &v, int l, int r){
        if(l>r) return NULL;
        int mid = (l+r)/2;
        TreeNode * root = new TreeNode(v[mid]);
        TreeNode * leftNode = convert(v,l,mid-1);
        TreeNode * rightNode = convert(v,mid+1,r);

        root->left = leftNode;
        root->right = rightNode;
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        TreeNode * root = convert(nums, l, r);
        return root;
    }
};
