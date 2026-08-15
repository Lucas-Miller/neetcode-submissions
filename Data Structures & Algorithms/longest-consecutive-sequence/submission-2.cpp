class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        std::unordered_set<int> vals;
        for(int i = 0; i < nums.size(); ++i) {
            vals.insert(nums[i]);
        }


        int longestChain = 0;

        for(auto& e : vals) {
            if(vals.contains(e - 1)) continue;

            int currentLongestChain = 0;
            while(vals.contains(e + currentLongestChain)) currentLongestChain++;  

            longestChain = std::max(currentLongestChain, longestChain);
        }
        
        return longestChain;
        
    }
};
