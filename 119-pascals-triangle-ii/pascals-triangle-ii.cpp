class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        ans[0] = ans[ans.size()-1] =1;
        long long  res=1;
        long long upperBhadneWalaNumber = rowIndex;
        for(long long i=1;i<rowIndex;i++){
        res *= upperBhadneWalaNumber;
        upperBhadneWalaNumber--;
        res /= i; 
        ans[i] = res;
        }
        return ans;
    }
};