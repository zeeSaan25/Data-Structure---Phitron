#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    boost();
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string maxi;
        int count_maxi = INT_MIN;
        string sentence;
        
        getline(cin, sentence);
        map<string, int> mp;
        string word;
        stringstream ss(sentence);
        while(ss >> word){
            mp[word]++;
            if(mp[word] > count_maxi){
                count_maxi = mp[word];
                maxi = word;
            }
        }
        cout<<maxi<<" "<<count_maxi<<endl;
    }
    return 0;
}
