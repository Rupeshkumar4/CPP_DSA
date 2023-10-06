#include <iostream>
#include<vector>
using namespace std;

int Smallest(vector<int>v){
    int small=INT_MAX;
    int second_small=INT_MAX;
    int n=v.size();
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(v[i]<small){
            second_small=small;
            small=v[i];
        }else if(v[i]<second_small && v[i]!=small){
            second_small=v[i];
        }
    }
    return second_small;
}
int Largest(vector<int>v){
    int large=INT_MIN;
    int second_large=INT_MIN;
    int n=v.size();
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(large<v[i]){
            second_large=large;
            large=v[i];
        }else if(second_large<v[i] && v[i]!=large){
            second_large=v[i];
        }
    }
    return second_large;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<Smallest(v)<<" "<<Largest(v)<<endl;
    return 0;
}