class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ;
        for(int i = 0; i< patterns.size(); i++){
        int ans = word.find(patterns[i]);
            if(ans != -1){
                count++;
            }
            }
        return count;
        
        
    }
};