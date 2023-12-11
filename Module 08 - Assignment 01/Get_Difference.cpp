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

int find_max(Node * head){
    Node * tmp = head;
    int max = tmp->value;
    while(tmp->next != NULL){
        tmp = tmp->next;
        if(tmp->value > max){
            max = tmp->value;
        }
    }
    return max;
}

int find_min(Node * head){
    Node * tmp = head;
    int min = tmp->value;
    while(tmp->next != NULL){
        tmp = tmp->next;
        if(tmp->value < min){
            min = tmp->value;
        }
    }
    return min;
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
    int max = find_max(head);
    int min = find_min(head);
    cout<<max-min<<endl;
    return 0;
}
