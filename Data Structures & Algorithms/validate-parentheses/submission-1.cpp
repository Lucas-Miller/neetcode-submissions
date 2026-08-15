class Solution {
public:
    bool isValid(string s) {

        std::stack<char> p;

        for(int i = 0; i < s.size(); ++i) {
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                p.push(s[i]);
            } else {

                if(p.empty()) {
                    return false;
                }

                char top = p.top();
                p.pop();

                if(s[i] == '}' && top != '{') return false;
                if(s[i] == ']' && top != '[') return false;
                if(s[i] == ')' && top != '(') return false;

            }
        }

        return p.empty(); 
        
    }
};
