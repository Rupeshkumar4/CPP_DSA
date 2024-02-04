#include<iostream>
using namespace std;

int solve(int lo, int hi, int k){
    int maxXor=0;
    for(int i=lo; i<hi;i++){
        for(int j=lo+1; j<=hi; j++){
            int temp=lo^j;
            if(maxXor<temp && temp<=k) maxXor=temp;
        }
    }
    return maxXor;
}

int main(){
    int low=3, high=5,k=6;
    int ans =solve(low, high,k);
    cout<<ans<<endl;
    return 0;
}