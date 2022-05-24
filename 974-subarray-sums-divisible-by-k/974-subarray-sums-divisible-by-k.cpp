class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        unordered_map<int,int>m;
        int sum=0;
        int count=0;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            int ans = sum % k;
            if(ans == 0)
                count++;
            if(ans < 0)
                ans += k;
            if(m.find(ans)!=m.end())
                count+=m[ans];
               m[ans]++;
        }
               return count;
        
    }
};