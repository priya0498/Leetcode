class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
     int res = 0, cnt = 0;
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] - nums[i - 1] == nums[i - 1] - nums[i - 2])
                ++cnt;
            else
                cnt = 0;
            res += cnt;
        }
        return res;
        
    }
};