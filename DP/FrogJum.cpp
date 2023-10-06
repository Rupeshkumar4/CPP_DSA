#include <iostream>
#include <vector>
using namespace std;

int frogJumpMemo(int i,vector<int>&heights, vector<int> &dp){
    if(i==0){
        return 0;
    }
    if(dp[i] != -1) return dp[i];
    int fsCost= frogJumpMemo(i-1,heights,dp)+abs(heights[i]-heights[i-1]);
    int SsCost=INT_MAX;
    if(i>1)
    SsCost= frogJumpMemo(i-2,heights,dp)+abs(heights[i]-heights[i-2]);

    return dp[i]=min(fsCost,SsCost);
}

int frogJumpTab(int i,vector<int>&heights,vector<int>&dp2){
    dp2[0]=0;
    for(int j=1;j<=i;j++){
        int jump2=INT_MAX;
        int jump1=dp2[j-1]+abs(heights[j]-heights[j-1]);
        if(j>1) jump2=dp2[j-2]+abs(heights[j]-heights[j-2]);
        dp2[j]=min(jump2,jump1);
    }
    
    return dp2[i];
}

// int frogSpace(int i, vector<int> &heights){
//     int first=0;
//     int second=abs(heights[1]-heights[0]);
//     // int third=INT_MAX;
//     for(int j=2;j<i;j++){
//         int firstJum=first+abs(heights[j]-heights[j-1]);
//         int secondJum=second+abs(heights[j]-heights[j-2]);
//         int third=min(firstJum,secondJum);
//         first=second;
//         second=third;
//     }
//     return second;
// }


int frogSpace(int i, vector<int> &heights) {
    int first = 0; // Energy required for the first jump (initially 0)
    int second = abs(heights[1] - heights[0]); // Energy required for the second jump

    // Loop through the heights starting from the third height (index 2)
    for (int j = 2; j < i; j++) {
        // Calculate the energy required for the frog to jump to the current height
        int firstJump = first + abs(heights[j] - heights[j - 1]);
        int secondJump = second + abs(heights[j] - heights[j - 2]);

        // Determine the minimum energy required for the current jump
        int currentJumpEnergy = min(firstJump, secondJump);

        // Update 'first' and 'second' for the next iteration
        first = second;
        second = currentJumpEnergy;
    }

    return second; // Return the minimum energy required for the frog to reach the last height
}




int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    // vector<int>dp(n,-1);
    // vector<int>dp2(n,-1);
    // return frogJumpMemo(n-1,heights,dp);
    // return frogJumpTab(n-1,heights,dp2);
    // return frogSpace(n,heights);
    int prev2=0;
    int prev1=abs(heights[0]-heights[1]);
    int curr;

    for (int i = 2; i <= n - 1; i++) {
      int l = prev1 + abs(heights[i] - heights[i - 1]);
      int r = prev2 + abs(heights[i] - heights[i - 2]);
      curr = min(l, r);
      prev2 = prev1;
      prev1 = curr;
    }
    return curr;
}