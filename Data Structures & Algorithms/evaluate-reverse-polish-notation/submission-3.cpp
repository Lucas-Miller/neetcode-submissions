class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        std::stack<int> nums;
        for(auto& token : tokens) {
            if(token == "-") {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();

                int result = first - second;
                nums.push(result);                

            } else if(token == "+") {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();

                int result = first + second;
                nums.push(result);

                
            } else if(token == "*") {
                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();

                int result = first * second;
                nums.push(result);

                
            } else if(token == "/") {
                                int second = nums.top();
                nums.pop();
                int first = nums.top();
                nums.pop();

                int result = first / second;
                nums.push(result);
                
            } else {
                nums.push(stoi(token));
            }
        }

        return nums.top();
        
    }
};
