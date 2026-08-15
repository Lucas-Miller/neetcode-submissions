class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        std::map<char, int> s1Freq;
        std::map<char, int> s2Freq;
        for(int i = 0; i <= s.size(); i++) {
            s1Freq[s[i]]++;
            s2Freq[t[i]]++;
        }


        if(s1Freq != s2Freq) return false;


        return true;
    }
};
