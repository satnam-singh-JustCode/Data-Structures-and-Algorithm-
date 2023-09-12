class Solution {
public:
    int solve(vector<int> &cost,int i,vector<int> &dp){
        // base 
         if(i == cost.size()) return dp[i] = 0;
         if(i == cost.size()-1) return dp[i] = cost[i];
         if(i > cost.size()) return dp[i] = 0;
         if(dp[i]!=INT_MAX) return dp[i];
        // recursive
         return dp[i] = min(cost[i] + solve(cost,i+1,dp),cost[i] + solve(cost,i+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,INT_MAX);
        solve(cost, 0,dp);
        for(auto i: dp) cout<<i<<" ";
        return min(dp[0],dp[1]);
    }
};