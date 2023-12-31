#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int t;
    cin>>t;
    while(t--){
        stack<char> st;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                st.push(s[i]);
            }else{
                if(!st.empty() && st.top()=='0'){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        (st.empty()) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}