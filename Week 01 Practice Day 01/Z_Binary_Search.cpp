#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    ll n,t; cin>>n>>t;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }    
    sort(v.begin(), v.end());
    while(t--){
        ll left = 0, right = n-1, flag = false;
        ll x; cin>>x;
        while(left <= right){
            ll mid = (left+right)/2;
            if(v[mid]  == x){
                flag = true;
                break;
            }
            if(v[mid] < x){
                left = mid+1;
            }
            else right=mid-1;
        }
        (flag == true) ? cout<<"found"<<endl : cout<<"not found"<<endl;
    }
    return 0;
}