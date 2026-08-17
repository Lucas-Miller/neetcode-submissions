class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;        // low
        int bot = rows - 1; // high
        int row = 0; 

        while(top <= bot) {
            row = top + ((bot - top) / 2);

            if(target > matrix[row][cols - 1]) {
                top = row + 1;
            } else if(target < matrix[row][0]) {
                bot = row - 1;
            } else {
                break;
            }
        }

        if(!(top <= bot)) {
            return false;
        }

        int l = 0;
        int r = cols - 1;
        int m = 0;

        while(l <= r) {
            m = l + ((r - l) / 2);
            
            if(matrix[row][m] < target) {
                l = m + 1;
            } else if(matrix[row][m] > target) {
                r = m - 1;
            } else {
                return true;
            }
        }

        return false;
        
    }
};
