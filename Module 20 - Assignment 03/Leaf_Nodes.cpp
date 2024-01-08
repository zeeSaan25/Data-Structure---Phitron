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
void leaf_Nodes(Node * root, vector<int> &v){
    if(root == NULL) return;
    if(root->left==NULL && root->right==NULL) v.push_back(root->val);
    leaf_Nodes(root->left, v);
    leaf_Nodes(root->right, v);
}
int main(){
    boost();
    vector<int> v;
    Node * root = input_tree();
    if(root != NULL) leaf_Nodes(root,v);
    sort(v.rbegin(), v.rend());
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}