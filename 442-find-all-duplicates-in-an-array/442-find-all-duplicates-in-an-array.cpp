class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > 1)
                a.push_back(nums[i]);
        }
        return a;
    
    }
};