#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class myStack{
    public:
        list<int> myList;
        void push(int val){
            myList.push_back(val);
        }
        void pop(){
            myList.pop_back();
        }
        int top(){
            return myList.back();
        }
        int size(){
            return myList.size();
        }
        bool empty(){
            if(myList.size() == 0) return true;
            else return false;
        }
};

int main(){
    boost();
    myStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        st.push(x);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}