class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() > t.size() || s.size() < t.size()) {
            return false;
        }

        
        std::unordered_map<char, int> charCount;

        for(int i = 0; i < s.size(); ++i) {
            charCount[s[i]]++;

        }
        
        std::unordered_map<char, int> charCountTwo;
        for(int j = 0; j < t.size(); ++j) {
            charCountTwo[t[j]]++;
        }


        return charCount == charCountTwo;


    }
};
