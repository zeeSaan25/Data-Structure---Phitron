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
Node* input_tree(){
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
void print_left(Node * root){
    if(root == NULL) return;
    if(root->left) print_left(root->left);
    else print_left(root->right);
    cout<<root->val<<" ";
}
void print_right(Node * root){
    if(root == NULL) return;
    cout<<root->val<<" ";
    if(root->right) print_right(root->right);
    else print_right(root->right);
}
int main(){
    boost();
    Node * root = input_tree();
    print_left(root->left);
    cout<<root->val<<" ";
    print_right(root->right);
    return 0;
}