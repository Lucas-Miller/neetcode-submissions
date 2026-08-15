class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        std::unordered_map<int, std::unordered_set<char>> rows;
        std::unordered_map<int, std::unordered_set<char>> cols;
        std::unordered_map<std::string, std::unordered_set<char>> squares;
        std::unordered_set<char> validChars = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        for(int row = 0; row < 9; ++row) {
            for(int col = 0; col < 9; ++col) {
                if(validChars.contains(board[row][col])) {
                    if(rows[row].contains(board[row][col])) return false;
                    if(cols[col].contains(board[row][col])) return false;

                    std::string squareCoords = to_string(row / 3) + ',' + to_string(col / 3);

                    if(squares[squareCoords].contains(board[row][col])) return false;

                    rows[row].insert(board[row][col]);
                    cols[col].insert(board[row][col]);
                    squares[squareCoords].insert(board[row][col]);
                }
            }

        }
        return true;
    }
};
