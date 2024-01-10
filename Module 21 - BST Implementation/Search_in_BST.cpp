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
bool search(Node * root , int x){
    if(root == NULL) return false;
    if(root->val == x) return true;
    if(x < root->val){
        return search(root->left, x);
    }
    else{
        return search(root->right, x);
    }
}
int main(){
    boost();
    Node * root = input_tree();
    int x;
    cin>>x;
    if(search(root, x)) cout<<"Yes! Found"<<endl;
    else cout<<"No! Not Found"<<endl;
    return 0;
}
