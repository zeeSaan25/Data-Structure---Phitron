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

void check_duplicate(Node * head){
    Node * tmp1 = head;
    Node * tmp2;
    int flag = 0;
    while(tmp1 != NULL){
        tmp2 = tmp1->next;
        while(tmp2 != NULL){
            if(tmp1->value == tmp2->value){
                flag = 1;
                break;
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    Node * head = NULL;
    while(1){
        int val;
        cin>>val;
        if(val == -1){
            break;
        }
        insert_at_tail(head, val);
    }

    check_duplicate(head);
    return 0;
}