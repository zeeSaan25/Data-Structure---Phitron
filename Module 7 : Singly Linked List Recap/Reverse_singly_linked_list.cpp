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

void print(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
}

void reverse(Node *& head, Node * currentNode){
    if(currentNode->next == NULL){
        head = currentNode;
        return;
    }
    reverse(head, currentNode->next);
    currentNode->next->next = currentNode;
    currentNode->next = NULL;
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
    print(head);
    cout<<endl<<"List after reverse : ";
    reverse(head, head);
    print(head);
    return 0;
}