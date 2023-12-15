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

void insert_at_tail(Node *& head, Node *& tail, int val){
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

void delete_from_position(Node * head, int pos){
    Node * tmp = head;
    if(head == NULL){
        return;
    }
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

void delete_head(Node *& head){
    if(head == NULL){
        return;
    }
    Node * deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void delete_tail(Node *& tail){
    if(tail == NULL){
        return;
    }
    Node * deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

int size(Node * head){
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
    cout<<endl;
}

void print_rev(Node * tail){
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
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    print(head);
    print_rev(tail);
    int pos;
    cin>>pos;
    if(pos == 0){
        delete_head(head);
        cout<<endl<<"Linked List After Deletion : "<<endl;
        print(head);
        print_rev(tail);
    }
    else if(pos == size(head)-1){
        delete_tail(tail);
        cout<<endl<<"Linked List After Deletion : "<<endl;
        print(head);
        print_rev(tail);
    }
    else if(pos >= size(head)){
        cout<<endl<<"Invalid"<<endl;
    }
    else{
        delete_from_position(head, pos);
        cout<<endl<<"Linked List After Deletion : "<<endl;
        print(head);
        print_rev(tail);
    }
    
    return 0;
}