class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
             // if(str1.length() > str2.length()) {
             //         swap(str1, str2);
             // }
             int n = str1.length();
             int m = str2.length();
            
             int len = 1;
             int ans = -1;
            
            while(len <= n){
          bool flag1 = true;
                     int j = 0 ;
            for(int i = 0 ; i < n ; i++){
                    if(str1[i] != str1[j])
                    {
                            flag1 = false;
                            break;                     
                    }
                    j++;
                    j %= len;
                    }
            if(j!= 0){
                    flag1 = false;
            }
            bool flag2 = true;
             j = 0;
            for(int i = 0 ; i < m ; i++){
                    if(str2[i]!= str1[j]){
                            flag2 = false;
                            break;
                    }
                    j++;
                    j %= len;
            }
            if( j!= 0){
                    flag2 = false;
            }
            if(flag1 == true&& flag2==true){
                     ans = len;
            }
            len++;
            }
            if(ans == -1){
                    return "";
            }
            return str1.substr(0,ans);
    }
};