class Solution {
public:
    int count=1;
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
        if(nums[i] == nums[i-1]){
            count++;
            if(count>2){
               nums.erase(nums.begin()+i);
               i--;
               count--;
            }
        }
        else {
            count = 1;
        }
        }
        return nums.size();
    }
};