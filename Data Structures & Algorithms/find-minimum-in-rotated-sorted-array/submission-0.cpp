class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size() - 1;
        int m = 0;

        while(l <= r) {
            m = l + ((r - l) / 2);

            if(nums[m] == nums[r]) {
                return nums[m];
            }

            if(nums[m] < nums[r]) {
                r = m;
            } else if (nums[m] > nums[r]) {
                l = m + 1;
            }
        }

        return nums[m];
        
    }
};
