class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> v;
        for(int i = 0; i < nums.size(); ++i) {
            v.push_back({nums[i], i});    
        }
        sort(v.begin(), v.end());
        vector<pair<int,int>> ans;
        for(int i = v.size() - 1; i >= (int)v.size() - k; --i) {
            ans.push_back(v[i]);    
        }
        sort(ans.begin(), ans.end(), [](pair<int,int> x, pair<int,int> y)-> bool {
            if(x.second < y.second) {
                return true;
            }
            return false;
        } );    
        vector<int> result;
        for(int i = 0; i < ans.size(); i++) {
            result.push_back(ans[i].first);
        }
        return result;    }
};