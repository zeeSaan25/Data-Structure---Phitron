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

void insert_at_head(Node *& head,Node *& tail, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        newNode->next = head;
        head = newNode;
        tail = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
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

void delete_from_position(Node * head,Node *& tail, int pos){
    Node * tmp = head;
    for(int i=0; i<pos-1; i++){
        tmp = tmp->next;
    }
    Node * deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    if(tmp->next == NULL){
        tail = tmp;
    }
}


void delete_head(Node *& head){
    if(head == NULL) return;
    Node * deleteNode = head;
    head = head->next;
    delete deleteNode;
}

int main(){
    Node * head = NULL;
    Node * tail = NULL;
    int q;
    cin>>q;
    while( q-- ){
        int x,v;
        cin>>x>>v;
        if(x == 0){
            insert_at_head(head,tail,v);
            print_linked_list(head);
        }
        else if(x == 1){
            insert_at_tail(head, tail, v);
            print_linked_list(head);
        }
        else if(x == 2){
            if(v == 0){
                delete_head(head);
                print_linked_list(head);
            }
            else if(v < size_counter(head)){
                delete_from_position(head,tail, v);
                print_linked_list(head);
            }
            else if(v >= size_counter(head)){
                print_linked_list(head);
            }
        }
    }
    
    
    return 0;
}