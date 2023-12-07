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
    
    cout<<endl<<"Linked List : ";
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
        if(tmp == NULL){
            cout<<endl<<"Invalid Position!"<<endl<<"You Can't Insert at this Position!!"<<endl<<endl;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<endl<<"Inserted at Head"<<endl<<endl;
}

void delete_from_position(Node * head, int pos){
    Node* tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout<<"Invalid Position!!"<<endl<<endl;
            return;
        }
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<"Deleted From Position!"<<endl;
}

void delete_head(Node *& head){
    Node* deleteHead = head;
    head = head->next;
    delete deleteHead;
    cout<<"Deleted Head!"<<endl;
}

int main(){
    Node* head = NULL;
    while(true){
        cout<<"Option 1 : Insert at Tail"<<endl;
        cout<<"Option 2 : Print Linked List"<<endl;
        cout<<"Option 3 : Insert at position"<<endl;
        cout<<"Option 4 : Insert at Head"<<endl;
        cout<<"Option 5 : Delete From Position"<<endl;
        cout<<"Option 6 : Delete Head"<<endl;
        cout<<"Option 7 : Terminate"<<endl;
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
            if(pos==0){
                insert_at_head(head,val);
            }
            else{
                insert_at_position(head, pos, val);
            } 
        }
        else if(op == 4){
            cout<<"Enter value : "<<endl;
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op == 5){
            cout<<"Ensert Position :"<<endl;
            int pos;
            cin>>pos;
            if(pos==0){
                delete_head(head);
            }
            else{
                delete_from_position(head, pos);
            }
        }
        else if(op == 6){
            delete_head(head);
        }
        else if(op == 7){
            break;
        }
    }
    return 0;
}