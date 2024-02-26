#include <iostream>
#include <vector>
#include<queue>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(30);
    v.push_back(90);
    v.push_back(5);
    v.push_back(65);
    v.push_back(71);
    int k;
    cin >> k;
    if(k>v.size()){
        cout<<"Invalid"<<endl;
        return 0;
    }
    priority_queue<int>pq;
    for(int i=0; i<v.size(); i++){
        pq.push(v[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<pq.top()<<endl;
    return 0;
}