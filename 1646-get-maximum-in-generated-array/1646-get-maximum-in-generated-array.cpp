class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 2){
                return 1;
        }
            vector<int> ans;
            ans.push_back(0);
            ans.push_back(1);
            for(int i = 1 ; i < n+1 ; i++){
                    ans.push_back(ans[i]);
                    ans.push_back(ans[i] + ans[i + 1]);
            }
            int maxi = INT_MIN;
            for(int i  = 0 ; i <= n ; i++){
                    maxi = max(ans[i], maxi);
            }
            
            return maxi;
    }
};