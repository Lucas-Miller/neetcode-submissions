class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); ++i) {
            freq[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& p : freq) {
            buckets[p.second].push_back(p.first);
        }

        vector<int> result;
        for(int i = buckets.size() - 1; i >= 0 && result.size() < k; --i) {
            for(int num : buckets[i]) {
                result.push_back(num);
            }
        }

        return result;
        
    }
};
