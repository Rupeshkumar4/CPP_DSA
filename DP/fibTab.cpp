#include <iostream>
#include <vector>
using namespace std;

int Fib(int n, vector<int>&dp){
    if(n<=1) return n;
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-2]+dp[i-1];
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    vector<int>dp(n+1,-1);
    cout<<Fib(n,dp);
    return 0;
}