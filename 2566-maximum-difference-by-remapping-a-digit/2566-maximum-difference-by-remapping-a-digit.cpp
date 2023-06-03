class Solution {
public:
    int minMaxDifference(int num) {
        string s = "";
        int a=0 , b = 0;
        int ans = INT_MAX;
        int ans1 = INT_MIN;
        while(num >= 1){
            s = s + char('0' + num%10);
            num = num/10;
           
        }
        reverse(s.begin(), s.end());
         string s2 = s;
//         for(int i = 0 ; i < s.size() ; i++){
            
//          ans = min(s[i] - '0', ans);
//          ans1 = max(s[i] - '0', ans1);
//         }
        int j = 0;
        while(s[j] == '9') {
            ++j;
        }
        char temp1 = s[j];
        cout << temp1 << endl;
        for(int i = 0; i < s.size() ;i++){
            if(s[i] == temp1){
                s[i] = 9 +'0';
             
            }
           // else if(s[i] == ans1 + '0'){
           //      s[i] = ans + '0';
           //  }
        }
     //   string s1 = s;
     
          char temp = s2[0];
        for(int i = 0 ; i < s2.size() ; i++){
           
            if(s2[i] == temp){
                s2[i] = 0 + '0';
            }
          // else if(s[i] == ans + '0'){
          //       s[i] = ans1 + '0';
          //   }
        }
       cout<<s<<" "<<s2;
      for(int i = 0 ; i <s.size() ;i++){
          a = a * 10 + s[i] - '0';
      }
         for(int i = 0 ; i <s2.size() ;i++){
          b = b * 10 + s2[i] - '0';
      }
     return a - b;
        //return 3;
    }
};