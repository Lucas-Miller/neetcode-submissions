class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        std::unordered_map<int, unordered_set<char>> rowFrequency;
        std::unordered_map<int, unordered_set<char>> colFrequency;
        std::unordered_map<std::string, unordered_set<char>> squares;
        unordered_set<char> validChars = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}; 

        for(int row = 0; row < 9; ++row) {
            for(int col = 0; col < 9; ++col) {
                if(validChars.contains(board[row][col])) {
                    if(rowFrequency[row].contains(board[row][col])) return false;
                    if(colFrequency[col].contains(board[row][col])) return false;
                                    
                    std::string squareCoords = (to_string(row / 3) + "," + to_string(col / 3));

                    if(squares[squareCoords].contains(board[row][col])) return false;

                    rowFrequency[row].insert(board[row][col]);
                    colFrequency[col].insert(board[row][col]);

                    squares[squareCoords].insert(board[row][col]);
                }
            }            
        }

        return true;
    }
};
