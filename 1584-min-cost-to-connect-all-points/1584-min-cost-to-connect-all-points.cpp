class Solution {
public:
    struct edge
    {
        int a;
        int b;
        int w;
    };
    
    struct CompareWeight {
        bool operator()(struct edge const& a, struct edge const& b)
        {
            return a.w>b.w;
        }
    };
    
    int find(int a, int* par)
    {
        if(par[a]==-1) return a;
        else return par[a] = find(par[a],par);
    }
    
    void merge(int a, int b, int* par)
    {
        par[a] = b;
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        if(n==1) return 0;
        
        int par[n];
        memset(par,-1,sizeof(par));
        
        priority_queue<struct edge, vector<struct edge>, struct CompareWeight> pq;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                struct edge e;
                e.a = i;
                e.b = j;
                e.w = abs(points[i][0]-points[j][0]) + abs(points[i][1]-points[j][1]);
                pq.push(e);
            }
        }
        int sum = 0;
        while(!pq.empty())
        {
            struct edge e = pq.top();
            pq.pop();
            int a = find(e.a, par);
            int b = find(e.b, par);
            if(a!=b)
            {
                sum += e.w;
                merge(a,b,par);
            }
        }
        return sum;
    }
};