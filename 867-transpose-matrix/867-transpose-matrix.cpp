class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> result;
        int i,j;
        for(i=0 ; i<matrix[0].size() ; i++)
        {
            vector<int> v;
            for(j=0 ; j<matrix.size() ; j++)
            {
                v.push_back(matrix[j][i]);
            }
           result.push_back(v);
        }
        return result;
    }
};