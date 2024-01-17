#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    boost();
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(n--){
        int x;
        cin>>x;
        pq.push(x);
    }
    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        if(val == 1){
            if(!pq.empty()) cout<<pq.top()<<endl;
            else cout<<"Empty"<<endl;
        }
        else if(val == 0){
            int p;
            cin>>p;
            pq.push(p);
            cout<<pq.top()<<endl;
        }
        else if(val == 2){
            if(pq.empty()) cout<<"Empty"<<endl;
            else{
                pq.pop();
                if(!pq.empty()) cout<<pq.top()<<endl;
                else cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}