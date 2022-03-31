class Solution {
public:
    bool is_possible(vector<int>& nums, int mid, int k)
    {
        int n = nums.size();
        
        int count = 1;
        
        int curr_sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            curr_sum += nums[i];
            
            if(curr_sum > mid)
            {
                count++;
                
                curr_sum = nums[i];
            }
        }
        
        if(count <= k)
            return true;
        
        return false;
    }
    
    int splitArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int low = *max_element(nums.begin(), nums.end());
        
        int high = 0;
        
        for(auto x : nums)
        {
            high += x;
        }
        
        int ans = -1;
        
        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            
            if(is_possible(nums, mid, k))
            {
                ans = mid;
                
                high = mid - 1;
            }
            
            else
                low = mid + 1;
        }
        
        return ans;
       
    }
};