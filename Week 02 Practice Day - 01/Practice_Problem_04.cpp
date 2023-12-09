#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool flag = false;


class Node
{
public:
    int value;
    Node* next;
    Node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
void insert_at_tail(Node *& head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insert_at_position(Node * head, int index, int val)
{
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1; i<=index-1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout<<"Invalid"<<endl;
            flag = false;
            return;
        }
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_at_head(Node *& head, int val)
{
    Node * newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print(Node * head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int main()
{
    int size;
    Node * head = NULL;
    while(true)
    {
        int val;
        cin>>val;
        if(val == -1) break;
        size++;
        insert_at_tail(head, val);
    }
    int t;
    cin>>t;
    while( t-- )
    {
        flag = true;
        int index, val;
        cin>>index>>val;
        if(index==0)
        {
            insert_at_head(head, val);
            size++;
        }
        else if(index > 0)
        {
            insert_at_position(head, index, val);
            size++;
        }
        else if(index > size)
        {
            cout<<"Invalid"<<endl;
            flag = false;
        }
        else if(size == index)
        {
            insert_at_tail(head,val);
            size++;
        }

        if(flag==true) print(head);
    }
    return 0;
}
