#include <iostream>
using namespace std;
int help(int n,vector<int>&nums,vector<int>&dp){
    if(n<0){
        return -1;
    }
    dp[0]=nums[0];
    for(int i=1;i<n;i++){
        int pick = nums[i]+dp[i-2];
        int notpick= dp[i-1];
        dp[i]=max(pick,notpick);
    }
    return dp[n-1];

}

int helpSpace(int n, vector<int>&nums){
    if(n<0){
        return -1;
    }
    int prv2=0;
    int prv1=nums[0];
    for(int i=1;i<n;i++){
        int pick=prv2+nums[i];
        int notpick=prv1+0;
        prv2=prv1;
        prv1=max(pick,notpick);
    }
    return prv1;
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    vector<int>dp(nums.size()+1,-1);
    // return help(nums.size(),nums,dp);
    return helpSpace(nums.size(),nums);
}