class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 0)
            {
                mp[nums[i]]++;
            }
            
        }
        int maxVal = INT_MIN;
        int number = -1;
        for(auto i : mp ){
            if(maxVal <= i.second) {
                if(maxVal == i.second) {
                    if(i.first < number) {
                        number = i.first;
                    }
                }
                else {
                    maxVal = i.second;
                    number = i.first;
                }
            }        
        }
        return number;
    }
};