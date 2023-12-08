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

void print_size(int size){
    cout<<size<<endl;
}

int main(){
    Node* head = NULL;
    int size = 0;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        size++;
        insert_at_tail(head, val);
    }
    print_size(size);
    return 0;
}
