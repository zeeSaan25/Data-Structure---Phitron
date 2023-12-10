#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
        public:
        int value;
        Node* next;

        Node(int value){
            this->value=value;
            this->next=NULL;
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
    tail = newNode;
}

void print_sorted_list(Node * node){
    if(node == NULL) return;
    cout<<node->value<<" ";
    print_sorted_list(node->next);
}

void sort_function(Node * head){
    for(Node * i=head; i->next!=NULL; i=i->next){
        for(Node * j=i->next; j!=NULL; j=j->next){
            if(i->value > j->value){
                swap(i->value, j->value);
            }
        }
    }
    print_sorted_list(head);
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
    sort_function(head);
    return 0;
}