class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> frequencyOf;
        for(int i = 0; i < nums.size(); ++i) {
            frequencyOf[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& pair : frequencyOf) {
            buckets[pair.second].push_back(pair.first);
        }

        vector<int> results;
        for(int j = buckets.size() - 1; j >= 0 && results.size() < k; --j) {
            for(int num : buckets[j]) {
                results.push_back(num);
            }
        }

        return results;
        
    }
};
