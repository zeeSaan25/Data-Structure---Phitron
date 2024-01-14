TreeNode<int>* insertionInBST(TreeNode<int>* root, int val)
{
    if(root == NULL){
        root = new TreeNode<int>(val);
        return root;
    }
    if(val < root->val){
        if(root->left == NULL){
            root->left = new TreeNode<int>(val);
        }
        else insertionInBST(root->left, val);
    }
    else{
        if(root->right == NULL){
            root->right = new TreeNode<int>(val);
        }
        else insertionInBST(root->right, val);
    }
    return root;
}
