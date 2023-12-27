#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    stack<int> myStack;
    stack<int> newStack;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        myStack.push(x);
    }
    while(!myStack.empty()){
        newStack.push(myStack.top());
        myStack.pop();
    }
    while(!newStack.empty()){
        cout<<newStack.top()<<" ";
        newStack.pop();
    }

    return 0;
}