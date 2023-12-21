#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
    public:
    string address;
    Node * next;
    Node * prev;
    Node(string address){
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *& head, Node *& tail, string address){
    Node * newNode = new Node(address);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void search_address(Node * head, Node *& currentNode, string add){
    Node * tmp = head;
    while(tmp != NULL){
        if(tmp->address == add){
            cout<<tmp->address<<endl;
            currentNode = tmp;
            return;
        }
        tmp = tmp->next;
    }
    cout<<"Not Available"<<endl;
}

void search_next(Node *& currentNode){
    if(currentNode->next == NULL){
        cout<<"Not Available"<<endl;
    }else{
        currentNode = currentNode->next;
        cout<<currentNode->address<<endl;
        
    }
}

void search_prev(Node *& currentNode){
    if(currentNode->prev == NULL){
        cout<<"Not Available"<<endl;
    }
    else{
        currentNode = currentNode->prev;
        cout<<currentNode->address<<endl;
    }
}

int main(){
    boost();
    Node * head = NULL;
    Node * tail = NULL;
    while(1){
        string address;
        cin>>address;
        if(address == "end") break;
        insert_at_tail(head, tail, address);
    }
    Node * currentNode = head;
    int q;
    cin>>q;
    while( q-- ){
        string a, b;
        cin>>a;
        if(a == "visit"){
            cin>>b;
            search_address(head, currentNode, b);
        }
        else if(a == "next"){
            search_next(currentNode);
        }
        else if(a == "prev"){
            search_prev(currentNode);
        }
    }
    return 0;
}