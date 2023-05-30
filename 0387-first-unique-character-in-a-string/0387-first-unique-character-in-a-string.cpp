class Solution {
public:
    int firstUniqChar(string s) {
        int flag = false;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = 0 ; j < s.size() ; j++){
                if(i == j)
                    continue;
                if(s[i] == s[j]){
                    flag = true;
                    break;
                }
            }
                if(flag == false){
                    return i ;
                }
                else{
                    flag = false;
                }
            
        }
        return -1;
    }
};