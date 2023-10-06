#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> NextSmallerElement(vector<int> v, int n){
    stack<int>s;
    vector<int>ans(n,-1);
    s.push(v[n-1]);
    for(int i=n-2;i>=0;i--){
        while(!s.empty() && s.top()>v[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i] = s.top();
        }
        s.push(v[i]);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    vector<int> ans = NextSmallerElement(v,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
