class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
         vector<vector<int>> v;
        vector<int> u;
         helper(candidates, target,0,v,u);
        return v;
    }
    
    void helper(vector<int>& candidates, int target,int i,vector<vector<int>>& result, vector<int>& current)
    {
        if(target==0){
            result.push_back(current);
            return ;
        }
        if(i==candidates.size() || target<0)
            return;
        
        current.push_back(candidates[i]);
        helper(candidates,target-candidates[i],i,result,current);
        current.pop_back();
        helper(candidates,target,i+1,result,current);
        
    }
};