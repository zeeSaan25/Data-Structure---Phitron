#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class myQueue{
    public:
    int size = 0;
    list<int> myList;
    void push(int val){
        size++;
        myList.push_back(val);
    }
    void pop(){
        size--;
        myList.pop_front();
    }
    int front(){
        return myList.front();
    }
    int size_counter(){
        return size;
    }
    bool empty(){
        myList.empty();
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