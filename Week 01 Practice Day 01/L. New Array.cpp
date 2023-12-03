#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void concat(vector<int>& a, vector<int> &b){
    vector<int>c = b;
    c.insert(c.end(), a.begin(), a.end());

    for(int i=0; i<c.size(); i++){
        cout<<c[i];
        if(i < c.size()-1){
            cout<<" ";
        }
    }
}

int main(){
    boost();
    int n; cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    concat(a,b);
    return 0;
}
