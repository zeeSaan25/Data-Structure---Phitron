
bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        BinaryTreeNode<int> * front = q.front();
        q.pop();
        if(front->data == x){
            return true;
        }
        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
    return false;
}
