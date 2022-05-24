class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        const int numSize = nums.size();
		int maxJump = 0;
		for (int i = 0; i < numSize; ++i)
		{
			if (maxJump < i) 
                return false;
			maxJump = max(maxJump, nums[i] + i);
			if (maxJump >= numSize - 1) 
                return true;
		}
		return false;
        
    }
};