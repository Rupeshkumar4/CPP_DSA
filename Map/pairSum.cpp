#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> TargetSum(vector<int>&v, int k){

    unordered_map<int, int>m;
    vector<int>ans(2,-1);

    for(int i=0; i<v.size();i++){
        if(m.find(k-v[i])!=m.end()){
            ans[0]=m[k-v[i]];
            ans[1]=i;
            return ans;
        }
        else{
            m[v[i]] = i;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int>ans=TargetSum(v,10);
    cout<<ans[0]<< " "<<ans[1]<< " "<<endl;

    return 0;
}