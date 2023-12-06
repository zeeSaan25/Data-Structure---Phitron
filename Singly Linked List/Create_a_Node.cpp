#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class Node{
        public:
        int value;
        Node* next;
    };
int main(){
    boost();
    Node a,b;
    a.value=10;
    a.next=&b;
    b.value=20;
    b.next=NULL;

    cout<<a.value<<" "<<a.next->value<<endl;
    return 0;
}