class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> m ;
            for(auto i : nums) m[i]++;
                vector<int>ans;
              priority_queue<pair<int, int>> p;
            for(auto i : m)
            p.push({i.second , i.first});
            while(k--)
            {
                ans.push_back(p.top().second);
                p.pop();
            }
            return ans;
    }
};