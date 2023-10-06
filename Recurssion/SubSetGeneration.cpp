#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> >ans;

 void SubsetGenerator(int index,vector<int>&subset,vector<int>&v){
    int n=v.size();
    if(index==n){
        ans.push_back(subset);
        return;
    }
    SubsetGenerator(index+1,subset,v);
    subset.push_back(v[index]);
    SubsetGenerator(index+1,subset,v);
    subset.pop_back();
}

int main(){
    
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
     vector<int>subset;
   SubsetGenerator(0,subset,v);
   sort(ans.begin(),ans.end());
    for(auto it:ans){
        for(auto ele:it){
            cout << ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}