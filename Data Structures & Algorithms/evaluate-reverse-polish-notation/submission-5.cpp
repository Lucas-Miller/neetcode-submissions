class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> nums;
        for(string& s : tokens) {
            if(s == "+") {
                int second = nums.top();
                nums.pop();
                
                int first = nums.top();
                nums.pop();

                int result = first + second;
                nums.push(result);
            } else if(s == "-") {
                int second = nums.top();
                nums.pop();
                
                int first = nums.top();
                nums.pop();

                int result = first - second;
                nums.push(result);
            } else if(s == "*") {
                int second = nums.top();
                nums.pop();
                
                int first = nums.top();
                nums.pop();

                int result = first * second;
                nums.push(result);
            } else if(s == "/") {
                int second = nums.top();
                nums.pop();
                
                int first = nums.top();
                nums.pop();

                int result = first / second;
                nums.push(result);
            } else {
                nums.push(stoi(s));
            }
        }

        return nums.top();
        
    }
};
