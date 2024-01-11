#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
class Node{
    public:
    int val;
    Node * left;
    Node * right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node * input_tree(){
    int val;
    cin>>val;
    Node * root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * parent = q.front();
        q.pop();
        int l, r;
        cin>>l>>r;
        Node * newLeft;
        Node * newRight;
        if(l==-1) newLeft = NULL;
        else newLeft = new Node(l);
        if(r==-1) newRight = NULL;
        else newRight = new Node(r);

        parent->left = newLeft;
        parent->right = newRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
    return root;
}
void insert(Node * root, int x){
    if(root == NULL){
        root = new Node(x);
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            root->left = new Node(x);
        }
        else insert(root->left, x);
    }
    else{
        if(root->right == NULL){
            root->right = new Node(x);
        }
        else insert(root->right, x);
    }
}
void print_level_order(Node * root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node * front = q.front();
        q.pop();

        cout<<front->val<<" ";

        if(front->left) q.push(front->left);
        if(front->right) q.push(front->right);
    }
}
int main(){
    boost();
    Node * root = input_tree();
    // int x;
    // cin>>x;
    insert(root, 20);
    insert(root, 15);
    print_level_order(root);
    return 0;
}