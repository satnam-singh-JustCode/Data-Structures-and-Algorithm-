class Solution {
public:
    int solve(int n,vector<int> &dp){
        // base case 
         if(n == 0 or n == 1) return dp[n] = n;
         if(n==2) return dp[n] = 1;
        // recursive case 
        if(dp[n]!=-1)return dp[n];
        return dp[n] = solve(n-1,dp)+solve(n-2,dp)+solve(n-3,dp);
    }
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        solve(n,dp);
        return dp[n];
    }
};