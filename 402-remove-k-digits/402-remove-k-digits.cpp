class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if (k == num.size()) return "0";
        string res;
        for (int i = 0; i < num.size(); i++) {
            if (i - k == res.size() || res.empty()) {
                res.push_back(num[i]);
            } else if (res.back() > num[i] && res.size() + k > i) {
                do {
                    res.pop_back();
                } while (res.back() > num[i] && res.size() + k > i);
                res.push_back(num[i]);
            } else if (res.size() < num.size() - k) {
                res.push_back(num[i]);
            }
        }
        int zero = 0;
        while (zero < res.size() && res[zero] == '0') zero++;
        if (zero == res.size()) return "0";
        return res.substr(zero);
    }
};