bool cmp(vector<int>& a, vector<int>& b) {return a[1] < b[1];}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
         sort(intervals.begin(), intervals.end(), cmp);
        int ans = 0;
        int j = intervals[0][0];
        for(int i=0;i<intervals.size();i++) {
            if(intervals[i][0] < j) {
                ans++;
            } else {
                j = intervals[i][1];
            }
            
        }
        return ans;
    }
};