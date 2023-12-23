#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack{
    int size = 0;
    Node * head = NULL;
    Node * tail = NULL;
    public:
    void push(int val){
        size++;
        Node * newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        size--;
        if(tail == NULL){
            head = NULL;
            return;
        }
        Node * deleteNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete deleteNode;
    }
    int top(){
        return tail->val;
    }
    int size_counter(){
        return size;
    }
    bool empty(){
        if(size == 0) return true;
        else return false;
    }
};

int main(){
    boost();
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}