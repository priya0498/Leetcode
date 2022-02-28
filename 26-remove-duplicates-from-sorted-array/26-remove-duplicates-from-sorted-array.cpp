class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     
        vector<int> ans;
        map<int , int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(mp[nums[i]]==0)
                ans.push_back(nums[i]);
            mp[nums[i]]++;
        }
        nums = ans;
            return ans.size();
    }
};