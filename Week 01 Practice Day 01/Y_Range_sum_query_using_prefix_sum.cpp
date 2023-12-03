//If we solve this using bruteforce, will give TLE
//So that we solve this problem using Prefix_Sum Algortithm

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    ll n,t;
    cin>>n>>t;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> prefix(n);
    prefix[0] = v[0];
    for(ll i=1; i<n; i++){
        prefix[i] = v[i] + prefix[i-1];
    }
    
    while(t--){
        ll l,r,sum=0;
        cin>>l>>r;
        l--; r--;
        if(l==0) sum = prefix[r] - 0;
        else sum = prefix[r] - prefix[l-1];
        cout<<sum<<endl;
    }
    return 0;
}