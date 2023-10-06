#include<iostream>
#include<map>
using namespace std;

int MissingNumber(vector<int>v){
    int n = v.size();
    vector<int>frq(n+1,0);
    for(int i=0; i<v.size();i++){
        frq[v[i]]++;
    }
    for(int i=1; i<frq.size();i++){
        if(frq[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n,-1);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<MissingNumber(v)<<" ";
    return 0;
}