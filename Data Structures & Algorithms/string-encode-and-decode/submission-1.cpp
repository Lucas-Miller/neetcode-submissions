class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encodedString;
        for(int i = 0; i < strs.size(); ++i) {
            encodedString.append(to_string(strs[i].size()) + '#' + strs[i]);
        }

        return encodedString;

    }


    vector<string> decode(string s) {
        std::vector<std::string> tokens;

        int i = 0;

        while(i < s.size()) {
            size_t delimiter = s.find('#', i);
            int length = stoi(s.substr(i, delimiter - i));
            tokens.push_back(s.substr(delimiter + 1, length));
            i = delimiter + 1 + length;
        }
        return tokens;
    }
};
