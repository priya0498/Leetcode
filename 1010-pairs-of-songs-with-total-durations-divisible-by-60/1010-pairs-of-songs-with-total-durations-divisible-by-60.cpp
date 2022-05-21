class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
          int ans = 0;
        
        map<int,int>mp;
        
        for(int i:time){
          
            if(i % 60==0) ans += mp[0];
            else 
                ans += mp[60 - i%60];
            mp[i % 60]++;
        }
        return ans;
    }
};