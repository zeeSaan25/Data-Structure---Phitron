#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int q;
    cin>>q;
    queue<string> line;
    while(q--){
        int n;
        cin>>n;
        
        if(n==0){
            string s;
            cin>>s;
            line.push(s);
        }
        else if(n == 1){
            if(!line.empty()){
                cout<<line.front()<<endl;
                line.pop();
            }else{
                cout<<"Invalid"<<endl;
            }
        }
    }
    return 0;
}