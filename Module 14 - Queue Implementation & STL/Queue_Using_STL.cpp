#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    queue<int> q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;
        q.push(val);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}