class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < s.size(); i++){
            mp[s[i]]++;
            if(mp[s[i]] == 2){
                return s[i];
            }
        }
        
        return -1;
    }
};