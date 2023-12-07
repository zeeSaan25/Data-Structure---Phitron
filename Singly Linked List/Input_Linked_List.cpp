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

void insert_at_tail(Node* &head, int val){
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

void print(Node * head){
    Node * tmp = head;
    cout<<"Linked List : ";
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
}


int main(){
    Node* head = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    print(head);
    return 0;
}