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

    print(head); 
    print_rev(tail);
    return 0;
}
