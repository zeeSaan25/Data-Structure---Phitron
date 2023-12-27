#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    queue<int> q;
    stack<int> st;
    int n; 
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty()){
        int k = q.front();
        q.pop();
        st.push(k);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}