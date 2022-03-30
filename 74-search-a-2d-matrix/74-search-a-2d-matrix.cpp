class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int m = matrix.size(); // no. of rows
        int n = matrix[0].size(); // no. of columns
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == target) return true;
            }
        }
        return false;
    }
};