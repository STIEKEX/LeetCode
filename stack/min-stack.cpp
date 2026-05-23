class MinStack {
    stack<int>a , s; 
public:
    MinStack() {
        s = stack<int>() ; 
        a = stack<int>() ;
    }
    
    void push(int val) {
        if(s.size() >0){
            s.push(min(s.top() ,val)) ;
        }
        else{
            s.push(val) ; 
           
        }
         a.push(val) ; 
       
        
    }
    
    void pop() {
        a.pop() ; 
        s.pop() ; 
        
    }
    
    int top() {
      return a.top() ;  
        
    }
    
    int getMin() {
       return  s.top() ; 
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