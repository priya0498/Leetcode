class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        int s[7] = {0},t[7] = {0} ,u[7] = {0};
        int n = tops.size();
        for(int i = 0;i<n;i++)
        {
            s[tops[i]]++;
            t[bottoms[i]]++;
            
            if(tops[i] == bottoms[i])
                u[tops[i]]++;
        }
        int mi = INT_MAX;
         for(int i = 1;i<7;i++)
         {
             if(s[i]+t[i]-u[i] == n)
             {
                 mi = min(mi,min(s[i],t[i])-u[i]);
             }
         }
         if(mi == INT_MAX)
             return -1;
        return mi;
    
    }
};