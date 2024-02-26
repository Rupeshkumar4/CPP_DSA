#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=3;
    vector<int>v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    int leaves=8;
    vector<int>visit(leaves+1,0);
    for(int i=0;i<n;i++){
        int temp=v[i];
        bool ok=1;
        while(ok){
            if(visit[temp]==0 && temp<=leaves){
            visit[temp]=1;
            temp+=temp;
            }
            else{
                ok=false;
            }
        }
    }

    for(int i=1;i<leaves;i++){
        if(visit[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}