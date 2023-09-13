class Solution {
public:
  int ans =0;
    int solve(vector<int> &cost, int i){
        // base case 
        if(i>=cost.size()) return 0;
        // recursive case 
        int l = solve(cost,2*i+1);
        int r = solve(cost,2*i+2);

        ans += (abs)(l-r);
        
        return cost[i] + max(l,r);
    }
    int minIncrements(int n, vector<int>& cost) {
        solve(cost,0);
        return ans;
    }
};