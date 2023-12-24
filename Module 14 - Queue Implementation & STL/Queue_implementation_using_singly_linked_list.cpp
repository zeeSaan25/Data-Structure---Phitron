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

class myQueue{
    int size = 0;
    Node * head = NULL;
    Node * tail = NULL;
    public:
        void push(int val){
            size++;
            Node * newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            tail = newNode;
        }
        void pop(){
            size--;
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
            if(head == NULL){
                tail = NULL;
            }
        }
        int front(){
            return head->value;
        }
        int size_counter(){
            return size;
        }
        bool empty(){
            if(size == 0) return true;
            else return false;
        }
};

int main(){
    boost();
    myQueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
