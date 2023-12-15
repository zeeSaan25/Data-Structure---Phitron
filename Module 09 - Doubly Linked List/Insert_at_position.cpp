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


void insert_at_position(Node * head, int pos, int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next
        ;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void print(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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

void print_rev(Node * tail){
    Node * tmp = tail;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
}

int main(){
    boost();
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail = c;

    head->next = a;

    a->next = b;
    a->prev = head;

    b->next = c;
    b->prev = a;

    c->prev = b;

    int pos, val;
    cin>>pos>>val;
    if(pos >= size(head)){
        cout<<"Invalid Position"<<endl;
    }else insert_at_position(head, pos, val);
    print(head);
    print_rev(tail);
    return 0;
}