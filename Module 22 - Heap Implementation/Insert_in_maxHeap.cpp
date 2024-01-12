#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    boost();
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
        int current_index = v.size()-1;
        while(current_index != 0){
            int parent_index = (current_index - 1) / 2;
            if(v[parent_index] < v[current_index]){
                swap(v[parent_index], v[current_index]);
            }
            else break;
            current_index = parent_index;       
        }
    }
    for(auto u : v) cout<<u<<" ";
    return 0;
}