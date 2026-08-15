class MinStack {
public:
    MinStack() {};
    
    void push(int val) {
        _stack.push(val);
        
        if(_minStack.empty() || val <= _minStack.top()) {
            _minStack.push(val);
        }

    };
    
    void pop() {
        if(_stack.top() == _minStack.top()) {
            _minStack.pop();
        }

        _stack.pop();
        
    };
    
    int top() {
        return _stack.top();
    };
    
    int getMin() {
        return _minStack.top();
    };

    private:
        std::stack<int> _stack;
        std::stack<int> _minStack;
};
