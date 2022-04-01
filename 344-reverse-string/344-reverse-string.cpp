class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size()==0)
        {
            return;
        }
        char temp = s[0];
        s.erase(s.begin());
        reverseString(s);
        s.push_back(temp);
        
    }
};