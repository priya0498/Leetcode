class Solution {
public:
    bool checkRecord(string s) {
        int count = 0, count1 = 0 ;
        for(int i = 0 ; i < s.size(); i++){
            if(s[i] == 'A'){
                count++;
            }
            if(s[i] == 'L'){
                count1++;
                
            }
            else{
                count1 = 0;
            }
            if(count >= 2 || count1 >= 3)
                return false;
        }
        return true;
    }
};