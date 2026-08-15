class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyOf;

        for(int i = 0; i < nums.size(); i++) {
            frequencyOf[nums[i]]++;
        }
        
        vector<vector<int>> buckets(nums.size() + 1);
        for(std::pair<const int, int> entry : frequencyOf ) {
            buckets[entry.second].push_back(entry.first);
        }

        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for(int j = 0; j < buckets[i].size(); ++j) {
                result.push_back(buckets[i][j]);
            }
        }


        return result;

        
    }
};
