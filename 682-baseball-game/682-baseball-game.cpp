class Solution {
public:
    int calPoints(vector<string>& ops) {
       vector<int> record;
        
        for(string s: ops) {
            if(s== "+") {
                int new_score = (*(record.end() - 1) + *(record.end() - 2));
                record.push_back(new_score);
            }
            else if(s == "D") {
                int new_score = 2*(*(record.end() - 1));
                record.push_back(new_score);
            }
            else if(s == "C") {
                record.pop_back();
            }
            else {
                int score = stoi(s);
                record.push_back(score);
            }
        }
        
        int scores_sum = accumulate(record.begin(), record.end(), 0);
        
        return scores_sum; 
    }
};