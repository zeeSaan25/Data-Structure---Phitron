#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}