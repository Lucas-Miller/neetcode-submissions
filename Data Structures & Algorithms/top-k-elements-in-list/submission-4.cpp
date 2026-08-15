class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<char, int> charFreq;

        for(int i = 0; i < nums.size(); ++i) {
            charFreq[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for(auto& p : charFreq) {
            buckets[p.second].push_back(p.first);
        }

        vector<int> result;
        for(int j = buckets.size() - 1; result.size() < k; --j) {
            for(int num : buckets[j]) {
                result.push_back(num);
            }
        }

        return result;
        
    }
};
