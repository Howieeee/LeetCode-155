class MinStack {
public:
    int min;
    stack<int> minStack;
    MinStack() {
        min = numeric_limits<int>::max();
    }
    
    void push(int val) {
        if(val <= min){ // 2  ->> 1 2 2  把min 放在現在的下面
            minStack.push(min);
            min = val; 
        }
        minStack.push(val);
    }
    
    void pop() {
        
        if(min == minStack.top()){ // 剛好pop到 min
            minStack.pop();
            min = minStack.top();
            minStack.pop();
        }else{
            minStack.pop();
        }
        //min.erase(minStack.top());
    }
    
    int top() {
        return minStack.top();
    }
    
    int getMin() {
        
        return min;
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
