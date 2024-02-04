#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;


// void solveMap(vector<int>v,int k){
//     unordered_map<int,int>ump;
//     int ans=INT_MAX;
//     for(int i=0;i<v.size();i++){
//         int rem=k-v[i];
//         ans=
//         if(ump.find(rem)!= ump.end()){
//             cout<<v[i]<<" "<<rem;
//         }
//     }
// }

void SolveTwoPointer(vector<int>v, int k){
    sort(v.begin(),v.end());
    int n=v.size();
    int possible=99999;

    int left=0,right=n-1;
    int first=v[0];
    int last=v[n-1];

    while(left<right){
        int sum=v[left]+v[right];
        if(sum==k){
            // cout<<v[left]<<" "<<v[right]<<endl;
            first=v[left];
            last=v[right];
            break;
        }
        else if((abs(k-sum)<possible)){
            possible=abs(k-sum);
            first=v[left];
            last=v[right];
        }else if(sum>k){
            right--;
        }else{
            left++;
        }
    }
    cout<<first<<" "<<last<<endl;
}

int main(){
    vector<int>v={1,2,3,4,5,6,7,8};
    int k=15;
    // solveMap(v,k);
    cout<<"=============Two Pointer========="<<endl;
    SolveTwoPointer(v,k);
}