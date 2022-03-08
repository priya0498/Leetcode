class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        unordered_map<int , int> presum;
        int sum = 0;
         for(int i = 0 ; i < n ;i++)
         {
             sum += nums[i];
             if(sum==k)
                 count++;
             
             if(presum.find(sum - k) != presum.end())
                 count += presum[sum-k];
             
             presum[sum]++;
         }
        
        return count;    
    }
};