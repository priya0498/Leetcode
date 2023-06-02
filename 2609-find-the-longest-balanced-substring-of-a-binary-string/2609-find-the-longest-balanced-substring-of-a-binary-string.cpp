class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
               int count = 0, count1 = 0 , ans = 0;
        int res;
        for(int i = 0 ; i < s.size() ; i++){
            if(i >0 && s[i] == '0' && s[i-1] == '1')
                 count = 0, count1 = 0 ;
            if(s[i] == '0')
                count++;
            if(s[i] == '1')
                count1++;
            res= 2 * min(count, count1);
            ans = max(res, ans);
              
        }
        return ans;
    }
};