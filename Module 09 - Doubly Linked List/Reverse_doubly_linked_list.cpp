#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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

void print(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

void reverse(Node * head, Node * tail){
    Node * i = head;
    Node * j = tail;
    while(i!=j && i->next!=j){
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

int main(){
    //boost();
    Node * head = NULL;
    Node * tail = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    // print(head);
    // cout<<endl<<"List After Reverse : ";
    reverse(head, tail);
    print(head);
    return 0;
}