#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    boost();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        while(n--){
            int x;
            cin>>x;
            st.insert(x);
        }
        for(auto it=st.begin(); it!=st.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
