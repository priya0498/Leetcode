class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
         int n = grid.size();
        int m = grid[0].size();
        int i=0,j=0;
        while(k--){
            for(int i=0;i<n;i++){
                for(int j=1;j<m;j++){
                   swap(grid[i][0],grid[i][j]);
                }
            }
            
            for(int i=1;i<n;i++){
                swap(grid[0][0],grid[i][0]);
            }
            
        }
        
        return grid;
    }
};