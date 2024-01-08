int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int>> q;
    q.push({root, 1});
    while(!q.empty()){
        pair<TreeNode<int>*,int> front = q.front();
        q.pop();

        if(front.first->val == searchedValue) return front.second;

        if(front.first->left){
            q.push({front.first->left, front.second+1});
        }
        if(front.first->right){
            q.push({front.first->right, front.second+1});
        }
    }
}
