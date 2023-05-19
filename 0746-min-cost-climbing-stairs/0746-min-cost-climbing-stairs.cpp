class Solution {
public:
        int f(int ind, vector<int> &a, unordered_map<int,int> &dp) {
                if(ind > a.size()) {
                        return INT_MAX;
                }
                if(ind == a.size()) {
                        return 0;
                }
                if(dp.find(ind) != dp.end()) {
                        return dp[ind];
                }
            return dp[ind] = min(f(ind + 1, a, dp), f(ind + 2, a, dp)) + a[ind];    
        }
    int minCostClimbingStairs(vector<int>& cost) {
            unordered_map<int,int> dp;
        vector<int> a(cost.size() + 1);
        a[0] = 0;
        for(int i = 0; i < cost.size(); ++i) {
                a[i + 1] = cost[i];
        }
        return f(0, a, dp);    
    }
};