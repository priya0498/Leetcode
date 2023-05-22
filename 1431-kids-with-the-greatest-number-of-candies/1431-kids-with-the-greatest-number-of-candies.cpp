class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
         vector<int> greater;
            
         vector<bool> ans;      
        for(int i = 0 ; i < candies.size(); i++){
                
         greater.push_back(candies[i] + extraCandies);
        }
            for(int i = 0 ; i < greater.size(); i++){
                    
                    bool flag = true;
                    
                    for(int j = 0  ; j < candies.size() ; j++){
                            
                            if(greater[i]<candies[j]){
                                    
                                    flag = false;
                                    break;
                            }
                            
                    }
                    ans.push_back(flag);              
            }
            
            return ans;
    }
};