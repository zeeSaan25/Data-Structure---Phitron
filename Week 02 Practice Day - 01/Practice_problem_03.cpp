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

void insert_at_tail(Node *& head, int val){
    Node * newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
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

int main(){
    int size;
    Node * head = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        size++;
        insert_at_tail(head, val);
    }
    print_middle(head, size);
    return 0;
}