class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     sort(nums.begin(),nums.end());
    int n = nums.size();
    int counter = 1;
    for(int i = 0; i<n; i++)
    {
        if(nums[i] < 1)
        {
            continue;
        }
        else if(counter == nums[i])
        {
            counter++;
        }
    }
    return counter;
        
    }
};