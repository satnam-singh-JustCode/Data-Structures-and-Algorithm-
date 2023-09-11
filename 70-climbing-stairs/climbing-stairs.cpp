class Solution {
public:
    int solve(int n,vector<int> &ans){
        // base case 
        if(n == 0) return ans[n] = 1;
        if(n == 1) return ans[n] = 1;
        // recursive case 
        if(ans[n]!= -1) return ans[n];
        return ans[n] = solve(n-1,ans) + solve(n-2,ans);
    }
    int climbStairs(int n) {
        vector<int> ans(n+1,-1);
        solve(n,ans);
        return ans[n];
    }
};