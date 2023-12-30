#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class myQueue{
    list<int> myList;
    public:
        void push(int val){
            myList.push_back(val);
        }
        void pop(){
            myList.pop_front();
        }
        int front(){
            return myList.front();
        }
};

class myStack{
    vector<int> v;
    public:
        void push(int val){
            v.push_back(val);
        }
        void pop(){
            v.pop_back();
        }
        int top(){
            return v.back();
        }
};
int main(){
    boost();
    bool flag = true;
    myQueue q;
    myStack st;
    int n,m;
    cin>>n>>m;
    if(n!=m){
        cout<<"NO"<<endl;
        return 0;
    }
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
    while(n--){
        if(st.top() != q.front()){
            flag = false;
        }
        st.pop();
        q.pop();
    }
    (flag) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}