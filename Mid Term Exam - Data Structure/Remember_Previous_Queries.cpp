#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    boost();
    list<int>myList;
    int q;
    cin>>q;
    while(q--){
        int x,v;
        cin>>x>>v;
        if(x == 0){
            myList.push_front(v);
        }
        else if(x == 1){
            myList.push_back(v);
        }
        else if(x == 2 && v < myList.size()){
            myList.erase(next(myList.begin(), v));
        }
        cout<<"L -> ";
        for(auto val : myList){
            cout<<val<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(auto it = myList.rbegin(); it != myList.rend(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}


