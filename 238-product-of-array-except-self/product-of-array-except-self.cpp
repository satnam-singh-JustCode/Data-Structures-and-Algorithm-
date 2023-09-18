class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countZero = 0;
        vector<int> nums1(nums.size());
        for(auto i: nums) if(i == 0) countZero++;
        if(countZero == 0){
            int product =1;
            for(auto i: nums)
            product *= i;
        for(int i=0;i<nums.size();i++)
            nums1[i] = product/nums[i];
            return nums1;
      }
      else{
          for(int i=0;i<nums.size();i++){
              if(nums[i] != 0) nums1[i] = 0;
              if(nums[i] == 0 and countZero < 2){
                  int p = 1;
                  for(int j=0;j<i;j++) p*=nums[j];
                  for(int j=i+1;j<nums.size();j++) p*=nums[j];
                  cout<<p;
                  nums1[i] = p;
              }
              if(nums[i] == 0 and countZero > 2) nums1[i] = 0;       
          }
          return nums1;
      }
    } 
};