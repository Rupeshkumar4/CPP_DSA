#include<iostream>
using namespace std;
#include<vector>
int solve(int idx1, int idx2, string& s, string& t, vector<vector<int>>& dp) {
        if (idx1 == 0 || idx2 == 0)
            return 0;
        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];    
        if (s[idx1-1] == t[idx2-1])
            return dp[idx1][idx2] = 1 + solve(idx1-1, idx2-1, s, t, dp);
        return dp[idx1][idx2] = max (solve(idx1-1, idx2, s, t, dp), solve(idx1, idx2-1, s, t, dp));   
    }   
int main(){
    string s="abbsbbd";   
        int n = s.length();
        string t = s;
        reverse(t.begin(), t.end());
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return solve(n, n, s, t, dp);
}