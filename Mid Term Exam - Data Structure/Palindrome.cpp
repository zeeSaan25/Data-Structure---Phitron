#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Node{
    public:
    int val;
    Node * next;
    Node * prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
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
    newNode->prev = tail;
    tail = newNode;
}

bool check_palindrome(Node * head, Node * tail){
    bool flag = true;
    Node * i = head;
    Node * j = tail;
    while(i != j && i->prev != j){
        if(i->val != j->val){
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }
    return flag;
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
    if(check_palindrome(head, tail)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    
    return 0;
}