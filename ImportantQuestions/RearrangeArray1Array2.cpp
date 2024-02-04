#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve(vector<int>v1, vector<int>v2){
    map<int,int>mp;
    for(int i=0; i<v1.size(); i++) mp[v1[i]]++;
    for(int i=0; i<v2.size(); i++) {
        if(mp[v2[i]]>0){
            while(mp[v2[i]]){
                cout<<v2[i]<<" ";
                mp[v2[i]]--;
            }
        }
    }
    for(auto &it:mp){
        while(it.second>0){
            cout<<it.first<<" ";
            it.second--;
        }
    }
}

int main(){
    cout<<"Give n,m"<<endl;
    int n,m;
    cin>>n>>m;
    vector<int>v1(n),v2(m);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    // vector<int>ans;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         if(v2[i]==v1[j]) {
    //             ans.push_back(v1[j]);
    //             v1[j]=-1;
    //         }
    //     }
    // }
    // sort(v1.begin(),v1.end());

    // for(int i=0;i<n;i++){
    //     if(v1[i] !=-1)ans.push_back(v1[i]);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }

    solve(v1,v2);
    return 0;
}