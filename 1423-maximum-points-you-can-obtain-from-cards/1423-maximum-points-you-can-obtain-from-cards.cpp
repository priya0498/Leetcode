class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        
        int sum=0;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=sum;
        int i=k-1,j=n-1;
        while(i>=0 && j>=n-k){
            sum-=nums[i];
            sum+=nums[j];
            i--;
            j--;
            ans=max(sum,ans);
        }
        return ans;
    }
};