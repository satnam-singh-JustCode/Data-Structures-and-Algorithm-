class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas = 0; 
        int sumcost = 0;
        int total=0;
        int start =0;
        for(auto i: gas) sumgas += i;
        for(auto i: cost) sumcost += i;
        if(sumgas < sumcost) return -1;
        for(int i=0;i<cost.size();i++){
            total += (gas[i] - cost[i]);
            if(total < 0){
               total = 0;
               start = i+1;
            } 
        }
        return start;
    }
};