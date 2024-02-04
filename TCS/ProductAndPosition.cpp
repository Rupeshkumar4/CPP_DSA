#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    vector<int>m=v;
    sort(v.begin(),v.end());
    int sum=0;
    int pos=0;
    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<m.size();j++){
            if(m[j]==v[i]){
                pos=abs(i-j);
                break;
            }
        }
        if(pos !=0){
            sum+= v[i]*pos;
        }else{
            sum+=v[i];
        }
    }

    cout<<sum<<endl;
}