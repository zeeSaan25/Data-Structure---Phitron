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

void search_x(Node * head, int x){
    int count = 0;
    int flag = 0;
    Node * tmp = head;
    while(tmp != NULL){
        if(tmp->value == x){
            flag = 1;
            break;
        }
        else count++;
        tmp = tmp->next;
    }
    if(flag == 0) cout<<"-1"<<endl;
    else cout<<count<<endl;
}

int main(){
    boost();
    int t;
    cin>>t;
    while( t-- ){
        Node * head = NULL;
        Node * tail = NULL;
        while(true){
            int val;
            cin>>val;
            if(val == -1) break;
            insert_at_tail(head, tail, val);
        }
        int x;
        cin>>x;
        search_x(head, x);
    }
    return 0;
}