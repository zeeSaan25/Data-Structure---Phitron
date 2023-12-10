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

void print_middle(Node * head, int size){
    Node * tmp = head;
    if(size%2 != 0){
        for(int i=0; i<(size/2); i++){
            tmp = tmp->next;
        }
        cout<<tmp->value<<endl;
    }
    else if(size%2 == 0){
        for(int i=0; i<(size/2)-1; i++){
            tmp = tmp->next;
        }
        cout<<tmp->value<<" "<<tmp->next->value<<endl;
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
    print_middle(head, size);
    return 0;
}