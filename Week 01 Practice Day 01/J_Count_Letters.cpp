#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    boost();
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    vector<int> cnt(26);
    for(int i=0; i<s.size(); i++){
        cnt[s[i]-'a']++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i] != 0){
            cout<<char(i+'a')<<" : "<<cnt[i]<<endl;
        }
    }

    return 0;
}