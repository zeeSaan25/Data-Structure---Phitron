int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop();
        TreeNode<int> * Node = parent.first;
        int level = parent.second;

        if(Node->val == searchedValue) return level;
        if(Node->left){
            q.push({Node->left, level+1});
        }
        if(Node->right){
            q.push({Node->right, level+1});
        }
    }
}
