#include<iostream>
#include<vector>
using namespace std;

vector<int> SortAcc(vector<int> v){
    int n = v.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    return v;
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int> ans = SortAcc(v);

    for(int i=0;i<n;i++){
        cout << ans[i] << "";
    }

    return 0;
}