#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void insert_in_maxHeap(vector<int> &v, int x){
    v.push_back(x);
    int current_index = v.size()-1;
    while(current_index != 0){
        int parent_index = (current_index-1)/2;
        if(v[parent_index] < v[current_index]){
            swap(v[parent_index], v[current_index]);
        }
        else break;
        current_index = parent_index;
    }
}

void delete_from_maxHeap(vector<int> &v){
    v[0] = v[v.size()-1];
    v.pop_back();
    int current_index = 0;
    while(1){
        int left_index = current_index*2 + 1;
        int right_index = current_index*2 + 2;
        int last_index = v.size() - 1;
        if(left_index <= last_index && right_index <= last_index){
            if(v[left_index] >= v[right_index] && v[left_index] > v[current_index]){
                swap(v[left_index], v[current_index]);
                current_index = left_index;
            }
            else if(v[right_index] >= v[left_index] && v[right_index] > v[current_index]){
                swap(v[right_index], v[current_index]);
                current_index = right_index;
            }
            else break;
        }
        else if(left_index <= last_index){
            if(v[left_index] > v[current_index]){
                swap(v[left_index], v[current_index]);
                current_index = left_index;
            }
            else break;
        }
        else if(right_index <= last_index){
            if(v[right_index] > v[current_index]){
                swap(v[right_index] , v[current_index]);
                current_index = right_index;
            }
            else break;
        }
        else break;
    }
}

void print_maxHeap(vector<int> v){
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}

int main(){
    boost();
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        insert_in_maxHeap(v, x);
    }
    print_maxHeap(v);
    delete_from_maxHeap(v);
    print_maxHeap(v);
    return 0;
}
