class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() == 1 and k == 1) return nums[0] / k;
        int i = 0;
        int j = 0;
        double sum = 0;
        double maxe = INT_MIN;
        while (j - i + 1 <= k) {
            sum += nums[j];
            j++;
        }
        j--;
        cout << sum;
        maxe = sum;
        while (j < nums.size()) {
            j++;
            sum += nums[j];
            sum -= nums[i];
            i++;
            maxe = max(sum, maxe);
        }
        return maxe / k;
    }
};