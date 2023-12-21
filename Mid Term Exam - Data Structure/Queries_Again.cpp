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

void insert_at_head(Node *& head, Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *& tail, int val){
    Node * newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node * head, int pos, int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

int size_counter(Node * head){
    Node * tmp = head;
    int cnt = 0;
    while(tmp != NULL){
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void print(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

void reverse_print(Node * tail){
    Node * tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
}

int main(){
    boost();
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin>>q;
    int size = size_counter(head);
    while(q--){
        int pos, val;
        cin>>pos>>val;
        if(pos == 0){
            insert_at_head(head, tail, val);
            size++;
            cout<<"L -> ";
            print(head);
            cout<<endl;
            cout<<"R -> ";
            reverse_print(tail);
            cout<<endl;
        }
        else if(pos == size){
            insert_at_tail(tail, val);
            size++;
            cout<<"L -> ";
            print(head);
            cout<<endl;
            cout<<"R -> ";
            reverse_print(tail);
            cout<<endl;
        }
        else if(pos > size){
            cout<<"Invalid"<<endl;
        }
        else{
            insert_at_position(head,pos,val);
            size++;
            cout<<"L -> ";
            print(head);
            cout<<endl;
            cout<<"R -> ";
            reverse_print(tail);
            cout<<endl;
        }
    }
    return 0;
}