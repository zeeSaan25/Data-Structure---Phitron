#include<bits/stdc++.h>
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public:
    bool operator()(Student a, Student b){
        if(a.marks < b.marks) return true;
        else if(a.marks > b.marks) return false;
        else{
            if(a.roll > b.roll) return true;
            else return false;
        }
    }
};
int main(){
    boost();
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin>>n;
    while(n--){
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        Student obj(name, roll, marks);
        pq.push(obj);
    }
    int q;
    cin>>q;
    while(q--){
        int cmnd;
        cin>>cmnd;
        if(cmnd == 0){
            string name;
            int roll, marks;
            cin>>name>>roll>>marks;
            Student obj(name, roll, marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(cmnd == 1){
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else cout<<"Empty"<<endl;
        }
        else if(cmnd == 2){
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }
                else cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}