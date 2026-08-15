class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> complement;

        for(int i = 0; i < nums.size(); ++i) {
            int difference = target - nums[i];

            if(complement.contains(nums[i])) {
                return {complement[nums[i]], i};
            }

            complement[difference] = i;
        }

    }
};
