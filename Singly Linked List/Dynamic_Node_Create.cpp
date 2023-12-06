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
int main(){
    boost();
    Node* head = new Node(100);
    Node* a = new Node(200);
    Node* b = new Node(300);
    head->next = a;
    a->next = b;

    cout<<head->value<<" "<<head->next->value<<" "<<a->next->value;
    return 0;
}