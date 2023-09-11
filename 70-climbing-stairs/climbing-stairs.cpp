class Solution {
public:
    int solve(int n,int i,vector<int> &dp){
        // base case 
          if(i == n) return dp[i] = 1;
          if(i == n-1) return dp[i] = 1;
          if(i > n) return dp[i] = 0; 
        // recursive case 
          if(dp[i] != -1) return dp[i];
          return dp[i] = solve(n,i+1,dp) + solve(n,i+2,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,0,dp);
    }
};