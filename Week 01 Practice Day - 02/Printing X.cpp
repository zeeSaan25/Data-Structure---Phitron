#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    int n; cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && i+j==n-1){
                cout<<"X";
            }
            else if(i==j){
                cout<<"\\";
            }
            else if(i+j==n-1){
                cout<<"/";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
