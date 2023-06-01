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
        int maxi = INT_MIN;
        int number = -1;
        for(auto i : mp ){
            
         if(maxi == i.second){
            if(i.first < number){
                number = i.first;
            }
         }
            else if(maxi < i.second){
                    maxi = i.second;
                    number = i.first;
                }
            }
        
        return number;
    }
};