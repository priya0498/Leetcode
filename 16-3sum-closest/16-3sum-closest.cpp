class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n =nums.size();
        int ans,minDiff=INT_MAX;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
        
                    int currSum = nums[i]+nums[j]+nums[k];
                    int diff = abs(currSum-target);
                    if(diff<minDiff){
                        minDiff=diff;
                        ans=currSum;
                    }
                }
            }
        }
        
        return ans;
    }
};