class MyStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if (empty()) {
            return -1; 
        }
        
        while (q1.size() > 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        
        int poppedElement = q1.front();
        q1.pop();
        swap(q1, q2);
        
        return poppedElement;
    }
    
    int top() {
        if (empty()) {
            return -1;
        }
        
        while (q1.size() > 1) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        
        int topElement = q1.front();
        q1.pop();
        q2.push(topElement);
        swap(q1, q2);
        
        return topElement;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};
