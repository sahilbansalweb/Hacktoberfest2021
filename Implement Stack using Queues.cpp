class MyStack {
public:
    queue <int> q1;
    queue <int> q2;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
        
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int e=q1.front();
        q1.pop();
        return e;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.empty()){
            return true;
        }
        else
            return false;
    }
};
