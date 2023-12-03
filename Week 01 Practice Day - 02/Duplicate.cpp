#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    ll sz = unique(v.begin(), v.end())-v.begin();
    (v.size() > sz) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
} 