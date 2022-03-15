class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> stack;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') 
                stack.push(i);
            
            else if (s[i] == ')') {
                
                if (!stack.empty()) {
                    stack.pop();
                }
                    
                else {
                    s.erase(i, 1);
                    i--;
                }
            }
        }
        
        while (!stack.empty()) {
            s.erase(stack.top(), 1);
            stack.pop();
        }
        return s;
    }
};