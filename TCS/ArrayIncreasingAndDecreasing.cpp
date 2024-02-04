#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9,1,2,3,4,5} ;
    unordered_map<int,int>ump;
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0;i<n;i++){
        maxi=max(v[i],maxi);
    }
    
    for(auto it:ump){
        if(it.first==maxi && it.second>=2){
            cout<<"False"<<endl;
            return 0;
        }else if(it.second>=3){
            cout<<"False"<<endl;
            return 0;
        }
    }
    cout<<"True"<<endl;
    return 0;
}