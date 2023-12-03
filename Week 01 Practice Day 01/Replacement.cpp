#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        if(v[i]<0){
            replace(v.begin(), v.end(), v[i], 2);
        }
        else if(v[i]>0){
            replace(v.begin(), v.end(), v[i], 1);
        }
    }
    for(int i=0; i<n; i++){
        cout<<v[i];
        if(i < v.size()-1){
            cout<<" ";
        }
    }
    return 0;
}