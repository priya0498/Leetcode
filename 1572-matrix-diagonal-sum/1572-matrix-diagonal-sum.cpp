class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int N = mat.size();
        int total = 0;
        for(int i = 0;i<N;i++){
            total+=mat[i][i];
            if (i != (N-i-1))
                total+=mat[i][N-i-1];
        }
        return total;
    }
};