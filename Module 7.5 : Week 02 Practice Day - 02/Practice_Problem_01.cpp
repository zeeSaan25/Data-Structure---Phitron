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

void print_linked_list(Node * head){
    Node * tmp = head;
    while(tmp != NULL){
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
        if(size1 == size2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    return 0;
}
