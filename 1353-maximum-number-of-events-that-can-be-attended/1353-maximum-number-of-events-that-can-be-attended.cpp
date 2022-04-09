class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
         int n=events.size();
        
        sort(events.begin(),events.end());
        
        priority_queue< int , vector<int> , greater<int>> pq;
        int i=0;
        int ans=0;
        for(int d=1;d<=100000;d++)
        {
            while(!pq.empty() && d>pq.top())  
            {
                pq.pop();
    
            }
            
            while(i<n && events[i][0]==d)
            {
                pq.push(events[i][1]);
                i++;
            }
            
            if(!pq.empty())
            {
                ans++;
                pq.pop();
            }
            
            if(i==n && pq.empty())
            {
                break;
            }
            
        }
        return ans;
    }
    
};