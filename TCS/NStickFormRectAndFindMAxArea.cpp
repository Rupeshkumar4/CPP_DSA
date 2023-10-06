#include <iostream>
#include<vector>
#include <map>
using namespace std;

int MaxArea(int n,vector<int>& v){
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    int l=-1,b=-1;
    for(auto it:mp){
        if(it.second>=2){
            l=max(it.first,l);
        }
    }
    
    for(auto it:mp){
        if(it.second>=2 && it.first != l){
            b=max(it.first,b);
        }
    }
    return l*b;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n,0);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout<<MaxArea(n,v);
    return 0;
}