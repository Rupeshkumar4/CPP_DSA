#include <iostream>
#include<set>
#include <vector>
#include <unordered_set>
using namespace std;

void RemoveDublicate(vector<int> &v){
    unordered_set<int>st;
    for(int i = 0; i < v.size();i++){
        st.insert(v[i]);
    }
    v.clear();
    for(auto it:st){
        v.push_back(it);
    }

}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(3);
    RemoveDublicate(v);

    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}