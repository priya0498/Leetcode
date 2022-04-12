class Solution {
public:
    void Live_or_Dead(vector<vector<int>> &board, int row, int col, int m, int n, vector<pair<int, int>> &neighbours) {
        int count = 0;
        
        for(auto it: neighbours) {
            int x = it.first + row;             
            int y = it.second + col;
            
            if(x >= 0 && y >= 0 && x < m && y < n) {
                if(board[x][y] == 1 || board[x][y] == -1)
                    count++;
            }
        }
                
        if(board[row][col] == 0) {
            if(count == 3)
                board[row][col] = 10; // 10 corresponds to a dead cell who has become alive
        }
        else {
            if(count < 2 || count > 3)
                board[row][col] = -1;
            else
                board[row][col] = 1;
        }
    }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        vector<pair<int, int>> neighbours {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                Live_or_Dead(board, i, j, m, n, neighbours);
            }
        }
        
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) {
                if(board[i][j] == -1)
                    board[i][j] = 0;
                else if(board[i][j] == 10)
                    board[i][j] = 1;
            }
        }
    }
    };    