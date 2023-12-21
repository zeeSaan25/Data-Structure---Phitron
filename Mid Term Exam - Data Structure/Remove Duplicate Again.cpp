#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    list<int> myList;
    while(1){
        int val;
        cin>>val;
        if(val == -1) break;
        myList.push_back(val);
    }

    auto it = myList.begin();
    while(it != myList.end()){
        auto checkit = next(it);
        while(checkit != myList.end()){
            if(*it == *checkit){
                checkit = myList.erase(checkit);  //After removal, erase() returns an iterator pointing to the next element in the list after the one that was just erased.
            }else checkit++;
        }
        it++;
    }

    myList.sort();


    for(auto num : myList){
        cout<<num<<" ";
    }
    return 0;
}
