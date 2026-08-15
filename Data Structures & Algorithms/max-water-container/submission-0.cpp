class Solution {
public:
    int maxArea(vector<int>& heights) {

        int left = 0;
        int right = heights.size() - 1;

        int overallMax = INT_MIN;
        while(left < right) {
            // Distance between two indexes times min height of each pointers index

            int currentMax = (right - left) * std::min(heights[left], heights[right]);
            overallMax = std::max(currentMax, overallMax);

            if(heights[left] < heights[right]) {
                left++;
            } else {
                right--;
            }
            
        }   

        return overallMax;
        
    }
};
