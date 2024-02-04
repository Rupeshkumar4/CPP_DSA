#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n<9){
        cout<<10+n;
        return 0;
    }
    vector<int>v;
    for(int i=9;i>=2;i--){
        while(n%i==0){
            v.push_back(i);
            n=n/i;
        }
    }
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }
    return 0;
}