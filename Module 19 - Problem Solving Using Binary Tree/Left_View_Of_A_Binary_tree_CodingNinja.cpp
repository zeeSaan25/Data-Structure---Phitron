vector<int> getLeftView(TreeNode<int> *root)
{
    bool freq[3010] ={false};
    queue<pair<TreeNode<int>*,int>> q;
    if(root != NULL){
        q.push({root,1});
    }
    vector<int> v;
    while(!q.empty()){
        pair<TreeNode<int>*, int> front = q.front();
        q.pop();
        TreeNode<int> * Node = front.first;
        int level = front.second;

        if(freq[level] == false){
            v.push_back(Node->data);
            freq[level] = true;
        }

        if(front.first->left) q.push({front.first->left, level+1});
        if(front.first->right) q.push({front.first->right, level+1});
    }
    return v;
    v.clear();
}

