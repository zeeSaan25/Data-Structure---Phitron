#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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

void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void insert_at_head(Node *& head, int val){
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;

}

int size_counter(Node * head){
    Node * tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_at_position(Node * head, int val, int pos){
    Node * newNode = new Node(val);
    Node * tmp = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_from_position(Node * head, int pos){
    Node * tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head(Node *& head){
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, tail, val);
    }
    int size = size_counter(head);
    int pos;
    cin>>pos;
    if(pos >= size){
        cout<<"Invalid Index"<<endl;
    }
    else if(pos > 0){
        delete_from_position(head, pos);
    }
    else if(pos == 0){
        delete_head(head);
    }
    print_linked_list(head);
    
    return 0;
}