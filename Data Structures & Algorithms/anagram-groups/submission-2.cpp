class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagrams;
        for(string s : strs) {

            vector<int> charFrequency(26);
            for(char c : s) {
                charFrequency[c - 'a']++;
            }

            string key;
            for(int num : charFrequency) {
                key += num + '#';
            }

            anagrams[key].push_back(s);
        }

        vector<vector<string>> results;
        for(auto pair : anagrams) {
            results.push_back(pair.second);
        }
        return results;

    }
};
