class MyQueue {
public:
stack<int>input;
stack<int>output;
int peekele=-1;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(input.empty())
           peekele=x;
        input.push(x);
        
    }
    
    int pop() {
      if(output.empty()){
      while(!input.empty()){
        output.push(input.top());
        input.pop();
      }
      }
      int val=output.top();
      output.pop();
      return val;

      
        
    }
    
    int peek() {
        if(output.empty())
        return peekele;
        else
        return output.top();
        
    }
    
    bool empty() {
        if(output.empty() && input.empty())
        return true;
        else
        return false;
        
    }
};
