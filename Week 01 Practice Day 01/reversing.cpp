#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++){
        cout<<v[i];
        if(i < n-1) cout<<" ";
    }
    return 0;
}