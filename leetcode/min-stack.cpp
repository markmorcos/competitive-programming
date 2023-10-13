class MinStack {
private:
    int mini = INT_MAX;
    int index = -1;
    pair<int, int> m_stack[30010];

public:
    MinStack() {
    }
    
    void push(int val) {
        this->mini = min(this->mini, val);
        m_stack[++index] = { val, this->mini };
    }
    
    void pop() {
        --index;
        if (index == -1) this->mini = INT_MAX; else this->mini = m_stack[index].second;
    }
    
    int top() {
        return m_stack[index].first;
    }
    
    int getMin() {
        return this->mini;
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
