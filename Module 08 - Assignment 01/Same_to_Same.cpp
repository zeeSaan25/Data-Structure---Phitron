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

int size_counter(Node * head){
    int count = 0;
    Node * tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}

void same_to_same(Node * head1, Node * head2){
    int flag = 1;
    Node * tmp1 = head1;
    Node * tmp2 = head2;
    while(tmp1 != NULL){
        if(tmp1->value != tmp2->value){
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    Node * head1 = NULL;
    Node * tail1 = NULL;
    Node * head2 = NULL;
    Node * tail2 = NULL;
    
    int size1, size2;
        while(1){
            int val;
            cin>>val;
            if(val == -1) break;
            insert_at_tail(head1, tail1, val);
        }
        size1 = size_counter(head1);
        while(1){
            int val;
            cin>>val;
            if(val == -1) break;
            insert_at_tail(head2, tail2, val);
        }
        size2 = size_counter(head2);
        if(size1 != size2) cout<<"NO"<<endl;
        else same_to_same(head1, head2);
    
    return 0;
}