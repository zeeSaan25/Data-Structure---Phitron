#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool flag = true;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=1; i<n; i++){
            if(n == 0 || n == 1){
                flag = true;
            }
            else if(v[i-1] > v[i]){
                flag = false;
                break;
            }
        }
        (flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;   
    }
    return 0;
}