class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int i=0;
        int j =nums.size()-1;
        for(i,j ; i<j;){
            int sum = nums[i] + nums[j];
            if(sum == target) {ans.push_back(i+1);ans.push_back(j+1);return ans;}
            if(sum < target) i++;
            else j--;
        }
        return {};
    }
};