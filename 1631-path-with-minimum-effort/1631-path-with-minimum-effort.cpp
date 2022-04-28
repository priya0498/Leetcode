class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n = h.size(), m= h[0].size(); 
        vector<vector<int>> cost(n,vector<int> (m,INT_MAX));
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        pq.push({0,0}); //i,j;
        cost[0][0]= 0;
     
        int dir[5]= { -1, 0, 1, 0, -1};
        while(!pq.empty())
        {
            int i=pq.top().first, j= pq.top().second;
            pq.pop();
            for(int d=0;d<4;d++)
            {
                int X = i+dir[d], Y= j+dir[d+1];
                if(X>=0 && X<n && Y>=0 && Y<m)
                {
                    int new_eff= max(cost[i][j], abs(h[i][j]-h[X][Y]));
                        if(new_eff<cost[X][Y])
                        {
                            cost[X][Y]= new_eff;
                            pq.push({X,Y});
                        }
                }
            }
                
            
        }
        return cost[n-1][m-1];
    }
};