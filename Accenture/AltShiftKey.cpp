#include <iostream>
#include<vector>
using namespace std;

vector<int> AltShiftKey(vector<int> v, int key){
    int index = key % v.size();
    int value = v[index];
    for(int i=index;i>=0;i--){
        v[i]=v[i-1];
    }
    v[0]=value;
    return v;
}

int main(){
    int n;
    cin >> n;
    vector<int>v(n,0);
    int key;
    cin >> key;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> ans = AltShiftKey(v,key);

    for(int i=0; i<n; i++){
        cout << v[i] <<" ";
    }
    return 0;

}