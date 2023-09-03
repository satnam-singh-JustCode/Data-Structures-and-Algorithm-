class Solution {
public:
    string removeKdigits(string nums, int k) {
        if (nums == "" )return "0";
        if (nums.size() <= k) return "0";
        stack<int> s;
        for (int i = 0; i < nums.size(); i++) {
            while (k > 0 and !s.empty() and s.top() > nums[i]) {
                k--;
                s.pop();
            }
            s.push(nums[i]);
        }
        while (k != 0) {
            s.pop();
            k--;
        }

        string ans = "";
        while (!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        // what if ans contain leading zeros
        while (ans[0] == '0') {
            ans.erase(ans.begin());
        }
        if (ans == "" ) return "0"; // for the test case k=1 and nums = "10";
        return ans;
    }
};