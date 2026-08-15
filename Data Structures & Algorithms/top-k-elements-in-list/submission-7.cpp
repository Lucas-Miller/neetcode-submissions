class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> freq;

        for(int i = 0; i < nums.size(); ++i) {
            freq[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for(const auto& curr : freq) {
            buckets[curr.second].push_back(curr.first);
        }


        vector<int> result;

        for(int j = buckets.size() - 1; j >= 0 && result.size() < k; --j) {
            for(const auto& val : buckets[j]) {
                if(result.size() < k) {
                    result.push_back(val);
                }
            }
        }


        return result;
        
    }
};
