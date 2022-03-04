class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
//         for(int i = 0 ; i < words.size()-1 ; i++){
//             string w1 = words[i];
//             string w2 = words[i+1];
//             int i1 =0 , i2 =0;
//             while(w1[i1] == w2[i2]){
//                 i1++ , i2++ ;
//             }
//             if(order.find(w1[i1])>order.find(w2[i2]))
            
//                 return false;
            
//         }
//         return true;
         for (int i = 0; i < words.size() - 1; i++) {
        string word1 = words[i];
        string word2 = words[i + 1];
        int i1 = 0, i2 = 0;
        while (word1[i1] == word2[i2]) {
            i1++, i2++;
        }
        int r = order.find(word1[i1]);   
        int s = order.find(word2[i2]);
        if (r > s) return false;
    }
    return true;
    }
};