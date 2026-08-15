class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::map<int, std::set<int>> rowCheck;
        std::map<int, std::set<int>> colCheck;
        std::map<std::string, std::set<int>> squareCheck;

        for(int row = 0; row < board.size(); ++row) {
            for(int col = 0; col < board[row].size(); ++col) {
                if(board[row][col] == '.') continue;
                
                if(rowCheck[row].contains(board[row][col])) return false;
                if(colCheck[col].contains(board[row][col])) return false;
                
                int squareRow = row / 3;
                int squareCol = col / 3;
                std::string squareIndex = to_string(squareRow) + ", "  + to_string(squareCol);

                if(squareCheck[squareIndex].contains(board[row][col])) return false;
                
                rowCheck[row].insert(board[row][col]);
                colCheck[col].insert(board[row][col]);
                squareCheck[squareIndex].insert(board[row][col]);
            }
        }

        return true;
    }
};
