#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    list<string> myList;
    while(1){
        string address;
        cin>>address;
        if(address == "end") break;
        myList.push_back(address);
    }
    auto current = myList.begin();
    int q;
    cin>>q;
    while(q--){
        string a,b;
        cin>>a;
        if(a == "visit"){
            cin>>b;
            auto it = find(myList.begin(), myList.end(), b);
            if(it != myList.end()){
                current = it;
                cout<<*current<<endl;
            }else cout<<"Not Available"<<endl;
        }
        else if(a == "next"){
            if(next(current) != myList.end()){
                current++;
                cout<<*current<<endl;
            }else cout<<"Not Available"<<endl;
        }
        else if(a == "prev"){
            if(current != myList.begin()){
                current--;
                cout<<*current<<endl;
            }else cout<<"Not Available"<<endl;
        }
    }
    return 0;
}
