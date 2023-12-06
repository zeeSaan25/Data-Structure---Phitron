#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Node{
        public:
        int value;
        Node* next;

        Node(int value){
            this->value=value;
            this->next=NULL;
        }
    };

void insert_at_tail(Node * &head, int v){
    Node * newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
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
    cout<<endl;
}
int main(){
    //boost();
    Node* head = NULL;
    while(true){
        cout<<"Choose an Option : "<<endl;
        cout<<"Option 1 : Insert at Tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Break"<<endl;
        int op; cin>>op;
        if(op == 1){
            cout<<"Enter the value you want to insert:";
            int v;
            cin>>v;
            insert_at_tail(head,v);
        }
        else if(op == 2){
            print(head);
        }
    }
    return 0;
}