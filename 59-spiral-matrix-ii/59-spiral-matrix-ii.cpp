class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
          vector<vector<int>> result(n,vector<int>(n,1));
    int m=n, count=1, i,j;
    n = n/2;
    for(i=0;i<=n;++i){
        for(j=i;j<m;++j)
            result[i][j] = count++;
        for(j=i+1;j<m;++j)
            result[j][m-1] = count++;
        for(j=m-2;j>=i;--j)
            result[m-1][j] = count++;
        for(j=m-2;j>i;--j)
            result[j][i] = count++;
        --m;
    }
    return result;
    }
};