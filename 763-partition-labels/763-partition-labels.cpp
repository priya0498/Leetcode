class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> chr(26 , 0);
       
     //   int n = s.size();
        for(int i = 0 ; i < s.size(); i++){
            chr[s[i]-'a'] = i;
            
        }
          vector<int> ans;
            int last = 0 ;
            int maxi = -1;
           
            for(int i = 0 ; i < s.size(); i++){
                maxi = max(maxi , chr[s[i] - 'a']);
                if(i== maxi){
                    ans.push_back(maxi - last + 1);
                last = i+1 ;
                }
            }
                
        
        return ans;
        
    }
};