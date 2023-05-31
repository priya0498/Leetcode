class Solution {
public:
    string convertToBase7(int num) {
    int s1 = 1;
        if(num <=0){
            if(num == 0){
                
                return "0";
            }
            s1 = -1;
            num = num * -1;
        }
        string ans = "";
        while(num > 0){
           int  rem = num % 7;
         
            ans = to_string(rem) +  ans;
           
               num = num / 7;
        }
        if(s1 == -1){
            ans = "-" + ans;
        }
        return ans;
    }
};