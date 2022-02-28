class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector> result ;
        // vector<int> row;
        // for( int  i = 0 ; i < numRows ; i++)
        // {
        //     row.push_back(1);
        //     for(int j = i - 1 ; j > 0 ; j--)
        //     {
        //         row[j] = row[j-1] + row[j];
        //     }
        //     result.push_back(row);
        // }
        // return result;
        
        vector<vector<int>> result;

     vector<int> row;
     for(int i = 0; i < numRows; i++){
         row.push_back(1);
         for(int j = i - 1; j > 0; j--){
             row[j] = row[j - 1] + row[j];
         }
         result.push_back(row);
     }
     
     return result;
    }
};