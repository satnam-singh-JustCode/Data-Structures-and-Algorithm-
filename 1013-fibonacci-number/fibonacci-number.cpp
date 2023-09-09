class Solution {
public:
    int solve(int n,int* dp){
        // base case 
         if(n==0 || n==1){
             dp[n]=n;
             return n;
         }
        // recursive case se pehle hmm ek baar check krr lenge ki vo fibonacchi number already calculated hai ki nhi.
         if(dp[n]!=-1){
             return dp[n];
         }
        // recursive case
        int fibo = solve(n-1,dp)+solve(n-2,dp);
        dp[n] = fibo;
        return fibo;
    }
    int fib(int n) {
        int dp[n+1];
        for(int i=0;i<n+1;i++){
            dp[i] = -1;
        }
        return solve(n,dp);
    }
};