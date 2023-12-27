//Check two stack same or not
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    
    stack<int> st1, st2;
    int n, m;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st1.push(x);
    }
    cin>>m;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        st2.push(x);
    }
    bool flag = true;
    if(n != m){
        cout<<"NO"<<endl;
        return 0;
    }
    while(!st1.empty()){
            if(st1.top() != st2.top()){
                flag = false;
                break;
            }
            st1.pop();
            st2.pop();
        }
    
    if(flag == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
