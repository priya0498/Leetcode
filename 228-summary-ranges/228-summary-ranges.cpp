class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
         vector<string> range; 
        int n =  nums.size();
        for(int i = 0; i < n; i++) {
            int start =  nums[i];  
            
           
            while(i+1 < n && nums[i+1] == nums[i]+1) {  
                i++;
            }
            
            
                string s, e;
                if(start != nums[i]) {
                     s = to_string(start);
                     e = to_string(nums[i]);
                    
                     s = s + "->" + e; 
                    range.push_back(s); 
                    
                }
                else {
                    string str = to_string(start);
                    range.push_back(str); 
                }
            
        }
        return range;
        
    }
};