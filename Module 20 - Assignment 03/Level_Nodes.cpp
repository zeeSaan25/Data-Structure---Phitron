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
        int l,r;
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
void print_level_nodes(Node * root, int lvl){
    queue<pair<Node*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        pair<Node*, int> parent = q.front();
        q.pop();
        if(parent.second == lvl) cout<<parent.first->val<<" ";
        if(parent.first->left) q.push({parent.first->left, parent.second+1});
        if(parent.first->right) q.push({parent.first->right, parent.second+1});
    }
}
int maxHeight(Node * root){
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l,r)+1;
}
int main(){
    boost();
    Node * root = input_tree();
    int lvl;
    cin>>lvl;
    if(lvl > maxHeight(root)-1) cout<<"Invalid"<<endl;
    else print_level_nodes(root, lvl);
    return 0;
}