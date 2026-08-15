class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagrams;
        for(string s : strs) {
            vector<int> frequency(26);
            for(char c : s) {

                frequency[c - 'a']++;
            }
            
            string key = "";
            for(int i = 0; i < 26; i++) {
                key += to_string(frequency[i]) + "#";
            }
            
            anagrams[key].push_back(s);
        }

        vector<vector<string>> results;
        for(auto& pair : anagrams) {
            results.push_back(pair.second);
        }

        return results;
    }
};
