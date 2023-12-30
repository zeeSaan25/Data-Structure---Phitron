#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    bool flag = true;
    int n,m;
    cin>>n>>m;
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
    stack<int> st;
    queue<int> q;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    while(!st.empty()){
        if(st.top() != q.front()){
            flag = false;
        }
        st.pop();
        q.pop();
    }
    (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}
