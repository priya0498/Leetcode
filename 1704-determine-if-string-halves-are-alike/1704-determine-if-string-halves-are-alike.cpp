class Solution {
public:
    bool halvesAreAlike(string s) {
      int half = s.size()/2;
        int count1 = 0 ;
        int count2 = 0;
        for(int i = 0 ; i < half; i++){
            if (s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i]== 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                count1++;
            }
            if (s[half + i] == 'A' || s[half + i] == 'E' || s[half + i] == 'I' || s[half + i]== 'O' || s[half + i] == 'U' || s[half + i] == 'a' || s[half + i] == 'e' || s[half+i] == 'i' || s[half + i]== 'o' || s[half+i] =='u')
            {
                count2++;
            }
        }
        return (count1 == count2);
        
    }
};