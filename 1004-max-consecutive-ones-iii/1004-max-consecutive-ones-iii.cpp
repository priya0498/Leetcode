class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start = 0 , ans = INT_MIN , zcount = 0;
        for(int end = 0 ; end < nums.size() ; end++){
            if(nums[end] == 0)
            {
                zcount++ ;
            }
            while(zcount > k){
                if(nums[start]==0){
                    zcount--;
                }
                start++;
            }
            ans = max(ans , end - start + 1);
        }
        return ans;
    }
};