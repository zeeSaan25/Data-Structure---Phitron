#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    vector<ll> prefix(n);
    prefix[0] = v[0];
    for(ll i=1; i<n; i++){
        prefix[i] = v[i] + prefix[i-1];
    }
    reverse(prefix.begin(), prefix.end());
    for(ll i=0; i<n; i++) cout<<prefix[i]<<" ";
    return 0;
}