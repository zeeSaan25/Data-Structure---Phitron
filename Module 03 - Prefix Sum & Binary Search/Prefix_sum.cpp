#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

//Prefix sum is a technique to find sum of array in a range, 
//Complexity is less in this way because we don't need to iterate the value

int main(){
    boost();
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<int> pre_sum(n);
    pre_sum[0] = v[0];
    for(int i=1; i<n; i++){
        pre_sum[i] = v[i] + pre_sum[i-1];
    }
    int low_range, high_range;
    cin>>low_range>>high_range;
    int ans = pre_sum[high_range-1] - pre_sum[low_range-2];
    cout<<ans<<endl;
    return 0;
}