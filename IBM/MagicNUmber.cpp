#include <iostream>
#include <vector>
using namespace std;

int MagicNumber(vector<int>v){
    int n = v.size();
    vector<int>temp;
    for(int i = 0; i < n;i++){
        if(v[i] >=300 && v[i] <= 999){
            temp.push_back(v[i]);
        }
    }
    sort(temp.begin(), temp.end());
    int lastVal = v[n-1];
    if(lastVal<=temp.size()){
        return temp[lastVal-1];
    }else{
        return -1;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){

        cin >> v[i];
    }
    cout<<MagicNumber(v);
    return 0;
}