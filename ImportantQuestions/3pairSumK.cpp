#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>v,int k){
    int n=v.size();
    for(int i=0;i<v.size()-1;i++){
        int left=i+1;
        int right =n-1;
        int find=k-v[i];
        while(left<right){
            int sum=v[left]+v[right];
            if(sum==find){
                cout<<v[left]<<" "<<v[right]<<" "<<v[i]<<endl;
                left++;
                right--;
            }
            else if(sum>find){
                right--;
            }
            else{
                left++;
            }
        }
    }
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    int k=7;
    solve(v,k);
    return 0;

}