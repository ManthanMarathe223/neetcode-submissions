class MinStack {
        stack<int> st;
        stack<int> minSt;
public:
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        int currVal = minSt.empty() ? val : min(val, minSt.top());
        minSt.push(currVal);
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
