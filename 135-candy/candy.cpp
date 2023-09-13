class Solution {
public:
    int candy(vector<int>& nums) {
        vector<int> left(nums.size(),1);
        vector<int> right(nums.size(),1);
        int prevCandy=1;
        int nextCandy=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                left[i] = prevCandy+1;
                prevCandy = left[i];
            }
            else{
                prevCandy = left[i];
            }
        }
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>nums[i+1]){
                right[i] = nextCandy+1;
                nextCandy = right[i];
            }
            else{
                nextCandy = right[i];
            }
        }
        int ans =0;
        for(int i=0;i<nums.size();i++){
            ans += max(left[i],right[i]);
        }
        return ans;
    }
};