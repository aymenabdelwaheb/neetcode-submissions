class MinStack {
public:
stack<int> mini;
stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        val= std::min(val,mini.empty() ? val : mini.top());
        mini.push(val);
    }
    
    void pop() {
        st.pop();
        mini.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
