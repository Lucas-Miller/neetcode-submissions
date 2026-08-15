class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> groupings;
        for(string s : strs) {
            vector<int> frequency(26);
            
            for(char c : s) {
                frequency[c - 'a']++;
            }

            string key;
            for(int i = 0; i < frequency.size(); ++i) {
                key.push_back(frequency[i] + '#');
            }

            groupings[key].push_back(s);
        }

        vector<vector<string>> result;

        for(auto& p : groupings) {
            result.push_back(p.second);
        }

        return result;
        
    }
};
