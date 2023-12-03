#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int m; cin>>m;
    vector<int> b(m);
    for(int i=0; i<m; i++) cin>>b[i];
    int x; cin>>x;
    a.insert(a.begin()+x, b.begin(), b.end());
    for(int i=0; i<a.size(); i++){
        cout<<a[i];
        if( i < a.size()-1){
            cout<<" ";
        }
    }
    return 0;
}