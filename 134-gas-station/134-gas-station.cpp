class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas=0 , totalcost=0;
        int curr= 0 , start=0;
        for(int i = 0 ; i < gas.size() ; i++){
            totalgas += gas[i];
        }
        for(int i= 0 ; i < cost.size(); i++){
            totalcost += cost[i];
        }
        if(totalgas<totalcost){
            return -1;
        }
        for(int i = 0 ; i < gas.size() ; i++){
            curr += (gas[i] - cost[i]);
                if(curr<0){
                    start = i+1;
                    curr=0;
                }
        }
        return start;
    }
};