#include <iostream>
#include <vector>
#include<queue>
using namespace std;
// Method 1

// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(30);
//     v.push_back(90);
//     v.push_back(5);
//     v.push_back(65);
//     v.push_back(71);
//     int k;
//     cin >> k;
//     if(k>v.size()){
//         cout<<"Invalid"<<endl;
//         return 0;
//     }
//     priority_queue<int, vector<int>, greater<int>>pq ;
//     for(int i=0; i<v.size(); i++){
//         pq.push(v[i]);
//         if(pq.size()>k){
//             pq.pop();
//         }
//     }
//     cout<<pq.top()<<endl;
//     return 0;
// }

// Method 2
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
    priority_queue<int>pq ;
    for(int i=0; i<v.size(); i++){
        pq.push(-1*v[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<-1*pq.top()<<endl;
    return 0;
}