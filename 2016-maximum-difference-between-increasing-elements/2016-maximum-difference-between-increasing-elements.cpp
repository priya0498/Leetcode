class Solution {
public:
    int maximumDifference(vector<int>& nums) {
            int maxi = INT_MIN;
            int res ;
            for(int i = 0 ; i < nums.size() ; i++)
            {
                    for(int j = i + 1 ; j <nums.size(); j++)
                    {
                            if(nums[i] < nums[j])
                            {
                                    res = nums[j] - nums[i];
                                    maxi = max(maxi , res);
                            }
                    }
            }
           
             if(maxi == INT_MIN){
                    return -1;
             }
              return maxi ;
        
    }
};