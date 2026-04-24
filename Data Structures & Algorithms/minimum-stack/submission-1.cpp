class MinStack {
private: 
    stack<int> s,min_stack;
    long int minn= INT_MAX;
public:
    int min(int v1, int v2){
        if (v1>v2) return v2;
        else return v1;
    }
    MinStack() {
        
    }
    
    void push(int val) {
        if(min_stack.size()!=0) minn=min(min_stack.top(),val);
        else minn=val;
        min_stack.push(minn);
        s.push(val);
    }
    
    void pop() {
        s.pop();
        min_stack.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
};
