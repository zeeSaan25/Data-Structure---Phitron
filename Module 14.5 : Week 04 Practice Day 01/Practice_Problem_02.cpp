#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    bool flag = true;
    stack<int> st;
    queue<int> q;
    int n, m;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    if(n != m){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        while(!st.empty()){
            if(st.top() != q.front()){
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}