class Solution {
public:
     vector<vector<int>> ans;
    void solve(vector<int>& nums,int idx, int &sum, int tar,vector<int> &temp){
        if(sum == tar){
            ans.push_back(temp);
            return;
        }
        
        for(int i=idx; i<nums.size(); i++){
            if(sum+nums[i]>tar)
            continue; 
            temp.push_back(nums[i]);
            sum+=nums[i];
            solve(nums,i,sum,tar,temp);
            sum-=nums[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int sum = 0;
        solve(candidates,0, sum, target,temp);
        return ans;
        
    }
};