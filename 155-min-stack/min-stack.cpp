class MinStack {
public:
    int minElement = INT_MAX;
    stack<int> s;
    stack<int> mins;
    MinStack() {
        
    }
    void push(int val) {
        if(mins.empty()) mins.push(val);
        else mins.push(min(val,mins.top()));
        s.push(val);
    }
    
    void pop() {
        s.pop();
        mins.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mins.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */