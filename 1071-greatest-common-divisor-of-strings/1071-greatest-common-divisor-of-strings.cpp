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
             while(len <= n) {
                bool divides1 = true;
                int j = 0;     
                for(int i = 0; i < n; ++i) {
                   if(str1[i] != str1[j]) {
                        divides1 = false;
                        break;    
                   }
                   j++;     
                   j %= len;     
                }
                if(j != 0) {
                        divides1 = false;
                }     

                bool divides2 = true;
                j = 0;
                for(int i = 0; i < m; ++i) {
                    if(str2[i] != str1[j]) {
                         divides2 = false;
                         break;
                    }
                        j++;
                    j %= len;    
                }      
                 if(j != 0) {
                         divides2 = false;
                 }       
                if(divides2 == true && divides1 == true) {
                    ans = len;    
                }
                cout << len << " " << divides1 << " " << divides2 <<endl;     
                len++;     
             }
             if(ans == -1) {
                return "";
             }       
             return str1.substr(0, ans);      
      
    }
};