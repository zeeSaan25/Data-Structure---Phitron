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
    cout<<endl<<endl;
}
void insert_at_position(Node * head, int pos, int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

int main(){
    Node* head = NULL;
    while(true){
        cout<<"Option 1 : Insert at Tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Insert at position"<<endl;
        cout<<"Option 4 : Terminate"<<endl;
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
        else if(op == 3){
            int pos,val;
            cout<<"Enter position : ";
            cin>>pos;
            cout<<"Enter value :";
            cin>>val;
            insert_at_position(head, pos, val);
            
        }
        else if(op == 4){
            break;
        }
    }
    return 0;
}