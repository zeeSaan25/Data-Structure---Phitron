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

void check_sort(Node * head){
    int flag = 0;
    Node * tmp = head;
    while(tmp->next->next != NULL){
        if(tmp->value > tmp->next->value){
            flag = 1;
            break;
        }
        tmp = tmp->next;
    }
    if(flag == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}


int main(){
    Node * head = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head, val);
    }
    check_sort(head);
    return 0;
}