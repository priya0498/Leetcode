class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < num.length() ; i++){
            int a = num[i] - '0';
            mp[a]++;
        }
        for(int i = 0 ; i < num.size() ; i++){
            if(mp[i] != num[i] - '0'){
                return false;
            }
        }
        return true;
    }
};